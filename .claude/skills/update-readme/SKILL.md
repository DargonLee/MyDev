---
name: update-readme
description: 更新主 README.md 文档
---

# 更新 README

当需要更新主 README.md 时执行。

## 触发场景

- 添加了新工具文档后，README 需要添加对应章节
- 文档结构发生变化
- 安装方法或配置有重要更新

## 步骤

1. **读取现有 README.md**
   ```bash
   cat README.md
   ```

2. **定位更新位置**
   - 查找对应章节（如 "### 终端工具"、"### 开发工具"）
   - 或在目录末尾添加新章节

3. **编辑 README.md**
   - 添加工具名称和简介
   - 添加快速安装命令
   - 添加参考链接

4. **提交推送**
   ```bash
   git add README.md
   git commit -m "更新 README：添加 <工具名> 章节"
   git push origin main
   ```

## 注意事项

- README 是完整指南，保持简洁但完整
- 使用中文
- 遵循现有章节格式