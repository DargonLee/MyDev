#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os
import subprocess
from pathlib import Path

def check_with_strings(file_path, search_strings):
    """使用 strings 命令检查文件"""
    try:
        result = subprocess.run(
            ['strings', str(file_path)],
            capture_output=True,
            text=True,
            timeout=30
        )
        
        found_items = {}
        for search_str in search_strings:
            if search_str in result.stdout:
                # 提取包含目标字符串的行及其上下文
                lines = result.stdout.split('\n')
                matching_indices = [i for i, line in enumerate(lines) if search_str in line]
                
                contexts = []
                for idx in matching_indices:
                    # 获取前后各2行作为上下文
                    start = max(0, idx - 2)
                    end = min(len(lines), idx + 3)
                    context = lines[start:end]
                    contexts.append('\n'.join(context))
                
                found_items[search_str] = contexts[:2]  # 只保留前2个匹配
        
        return found_items if found_items else None
        
    except Exception as e:
        return None

def is_binary_file(file_path):
    """判断是否是二进制文件"""
    # 排除明显的文本文件
    text_extensions = {'.h', '.m', '.mm', '.swift', '.c', '.cpp', '.hpp',
                      '.txt', '.md', '.json', '.plist', '.xml', '.sh',
                      '.py', '.rb', '.js', '.css', '.html', '.strings'}
    
    if file_path.suffix.lower() in text_extensions:
        return False
    
    # 检查是否是可执行文件或库文件
    executable_extensions = {'.a', '.dylib', '.framework', '.xcframework'}
    if file_path.suffix.lower() in executable_extensions:
        return True
    
    # 尝试读取文件头来判断
    try:
        with open(file_path, 'rb') as f:
            header = f.read(4)
            # Mach-O 文件魔数
            if header in [b'\xfe\xed\xfa\xce', b'\xfe\xed\xfa\xcf',  # 32/64-bit
                         b'\xce\xfa\xed\xfe', b'\xcf\xfa\xed\xfe',  # reverse
                         b'\xca\xfe\xba\xbe', b'\xbe\xba\xfe\xca']:  # fat binary
                return True
            # Archive 文件
            if header.startswith(b'!<ar'):
                return True
    except:
        pass
    
    return False

def find_all_binary_files(root_dir, max_depth=10):
    """查找所有二进制文件"""
    binaries = []
    
    for root, dirs, files in os.walk(root_dir):
        # 计算当前深度
        depth = root[len(str(root_dir)):].count(os.sep)
        if depth > max_depth:
            continue
        
        # 跳过一些明显不需要检查的目录
        dirs[:] = [d for d in dirs if d not in {'.git', 'node_modules', '.build', 'DerivedData'}]
        
        for file in files:
            file_path = Path(root) / file
            
            # 检查是否是二进制文件
            if is_binary_file(file_path):
                binaries.append(file_path)
    
    return binaries

def main():
    # 搜索的关键字
    search_strings = [
        "BEGIN PRIVATE KEY",
        "BEGINPRIVATEKEY",
        "BEGIN RSA PRIVATE KEY",
        "-----BEGIN"
    ]
    
    print("🔍 私钥泄露检查工具")
    print("=" * 70)
    
    # 获取当前目录
    current_dir = Path.cwd()
    print(f"📁 检查目录: {current_dir}\n")
    
    # 询问用户要检查的范围
    print("请选择检查范围:")
    print("1. 当前目录及所有子目录（全面检查，可能较慢）")
    print("2. 仅检查 Pods 目录")
    print("3. 仅检查 .framework 和 .xcframework 文件")
    print("4. 检查编译产物 (build, DerivedData)")
    
    choice = input("\n请输入选项 (1-4, 默认 1): ").strip() or "1"
    
    target_dirs = []
    if choice == "1":
        target_dirs = [current_dir]
        print(f"\n📦 将检查整个项目目录...")
    elif choice == "2":
        pods_dir = current_dir / "Pods"
        if pods_dir.exists():
            target_dirs = [pods_dir]
            print(f"\n📦 将检查 Pods 目录...")
        else:
            print("\n❌ 未找到 Pods 目录")
            return
    elif choice == "3":
        print(f"\n📦 将检查所有 framework/xcframework 文件...")
        # 这个在后面特殊处理
    elif choice == "4":
        build_dirs = [
            current_dir / "build",
            current_dir / "DerivedData",
            current_dir / "Build"
        ]
        target_dirs = [d for d in build_dirs if d.exists()]
        if not target_dirs:
            print("\n❌ 未找到编译产物目录")
            return
        print(f"\n📦 将检查编译产物目录...")
    
    # 查找所有二进制文件
    print("🔎 正在扫描二进制文件...\n")
    
    all_binaries = []
    
    if choice == "3":
        # 特殊处理：查找所有 framework
        for pattern in ["**/*.framework", "**/*.xcframework", "**/*.a", "**/*.dylib"]:
            for item in current_dir.glob(pattern):
                if item.is_file():
                    all_binaries.append(item)
                elif item.is_dir():
                    # 对于 framework/xcframework，查找其中的二进制
                    if item.suffix == '.framework':
                        binary = item / item.stem
                        if binary.exists():
                            all_binaries.append(binary)
                    elif item.suffix == '.xcframework':
                        for platform_dir in item.iterdir():
                            if platform_dir.is_dir():
                                for sub_item in platform_dir.iterdir():
                                    if sub_item.suffix == '.framework':
                                        binary = sub_item / sub_item.stem
                                        if binary.exists():
                                            all_binaries.append(binary)
                                    elif sub_item.is_file() and is_binary_file(sub_item):
                                        all_binaries.append(sub_item)
    else:
        for target_dir in target_dirs:
            all_binaries.extend(find_all_binary_files(target_dir))
    
    if not all_binaries:
        print("❌ 未找到任何二进制文件")
        return
    
    print(f"✅ 找到 {len(all_binaries)} 个二进制文件\n")
    print("🔍 开始检查私钥泄露...\n")
    print("=" * 70)
    
    # 检查每个二进制文件
    found_files = []
    
    for idx, binary_path in enumerate(all_binaries, 1):
        rel_path = binary_path.relative_to(current_dir)
        print(f"\r进度: {idx}/{len(all_binaries)} - 检查: {rel_path}", end='', flush=True)
        
        found_items = check_with_strings(binary_path, search_strings)
        
        if found_items:
            found_files.append({
                'path': rel_path,
                'full_path': binary_path,
                'matches': found_items
            })
    
    print("\n" + "=" * 70)
    
    # 显示结果
    if found_files:
        print(f"\n🚨 发现 {len(found_files)} 个文件包含私钥信息！\n")
        
        for idx, file_info in enumerate(found_files, 1):
            print(f"\n{'='*70}")
            print(f"【{idx}】文件: {file_info['path']}")
            print(f"完整路径: {file_info['full_path']}")
            print(f"\n发现的私钥标识:")
            
            for search_str, contexts in file_info['matches'].items():
                print(f"\n  🔑 关键字: '{search_str}'")
                for ctx_idx, context in enumerate(contexts, 1):
                    print(f"  匹配 {ctx_idx}:")
                    for line in context.split('\n'):
                        if line.strip():
                            print(f"    {line[:100]}")  # 限制每行显示长度
        
        print(f"\n{'='*70}")
        print("\n⚠️  安全建议:")
        print("1. 立即从代码和资源文件中移除硬编码的私钥")
        print("2. 将私钥移至服务器端或使用安全的密钥管理服务")
        print("3. 如果私钥已泄露，立即轮换密钥")
        print("4. 审查相关的第三方库，确认是否为库本身的问题")
        print("5. 检查这些文件是否应该被 .gitignore 忽略")
        
    else:
        print("\n✅ 未发现私钥泄露")
        print("所有检查的二进制文件都是安全的")

if __name__ == "__main__":
    main()
