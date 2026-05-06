# mise - 开发环境管理工具

## 简介

mise（发音 "meez"）是一个统一管理开发工具、环境变量和任务的 CLI 工具。名字来源于法语 "mise en place"（准备工作），就像专业厨房在烹饪前准备刀具、配料一样，mise 为你的开发环境做好准备工作。

官网：https://mise.jdx.dev/

## 核心功能

### 1. 开发工具管理

- 安装和管理项目所需的工具版本
- 自动切换版本（当进入不同项目目录时）
- 支持数百种工具：node, python, ruby, go, rust, java, deno, bun, terraform, kubectl, zig, swift, php, elixir 等
- 通过 `mise.toml` 配置文件管理

### 2. 环境变量管理

- 从 `mise.toml`、`.env` 文件加载环境变量
- 支持 shell 命令输出作为环境变量
- 项目特定的环境变量自动加载

### 3. 任务管理

- 定义 build、test、lint、deploy 等命令
- 任务可以依赖其他任务
- 与工具和环境变量一起配置

## 安装

```bash
# 推荐安装方式
curl https://mise.run | sh

# 或使用 Homebrew
brew install mise

# 验证安装
mise doctor
```

## 快速开始

### 1. 添加和安装工具

```bash
# 添加工具到项目
mise use node@24 python@3.13 terraform@1

# 安装所有工具
mise install
```

这会创建 `mise.toml` 文件：

```toml
[tools]
node = "24"
python = "3.13"
terraform = "1"
```

### 2. 配置环境变量

```bash
# 创建 .env.local 文件
echo "DATABASE_URL=postgres://localhost/orders" > .env.local

# mise 会自动加载
mise env -s bash
```

### 3. 定义任务

在 `mise.toml` 中添加：

```toml
[tasks.test]
run = "pytest"
description = "Run tests"

[tasks.deploy]
run = ["build", "test", "migrate", "ship"]
description = "Deploy the application"
```

运行任务：

```bash
mise run test
mise run deploy
```

## 配置文件示例

完整 `mise.toml` 示例：

```toml
# 工具版本
[tools]
node = "24"       # 使用 latest LTS
python = "3.13"   # 指定版本
terraform = "1"
go = "latest"

# 环境变量
[env]
DATABASE_URL = "postgres://localhost/mydb"
API_KEY = { value = "secret", sensitive = true }

# 任务定义
[tasks]
build = "npm run build"
test = { run = "pytest", description = "Run all tests" }

[tasks.lint]
run = ["npm run lint", "ruff check ."]
description = "Lint code"

[tasks.deploy]
run = ["build", "test", "terraform apply"]
description = "Full deployment"
```

## 常用命令

```bash
# 查看当前激活的工具
mise current

# 安装工具
mise install <tool>@<version>

# 使用特定版本
mise use <tool>@<version>

# 查看可用的任务
mise tasks

# 运行任务
mise run <task>

# 查看环境变量
mise env

# 诊断检查
mise doctor

# 更新 mise 本身
mise self-update
```

## 与其他工具对比

| 工具 | 语言管理 | 环境变量 | 任务管理 |
|------|---------|---------|---------|
| mise | ✅ 多语言 | ✅ | ✅ |
| asdf | ✅ 多语言 | ❌ | ❌ |
| nvm | ✅ Node only | ❌ | ❌ |
| pyenv | ✅ Python only | ❌ | ❌ |
| direnv | ❌ | ✅ | ❌ |

## 优势

1. **统一管理**：一个工具管理所有开发环境需求
2. **自动切换**：进入项目目录自动激活正确的工具版本
3. **可重现环境**：通过 `mise.toml` 确保团队成员使用相同版本
4. **任务编排**：替代 Makefile，更简单直观
5. **快速**：用 Rust 编写，性能优秀

## Shell 集成

### Bash

```bash
# 添加到 ~/.bashrc
eval "$(mise activate bash)"
```

### Zsh

```bash
# 添加到 ~/.zshrc
eval "$(mise activate zsh)"
```

### Fish

```bash
# 添加到 ~/.config/fish/config.fish
mise activate fish | source
```

## 参考资料

- 官方文档：https://mise.jdx.dev/
- GitHub：https://github.com/jdx/mise
- 工具列表（Pantry）：https://mise.jdx.dev/pantry.html