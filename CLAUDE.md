# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## 项目性质

这是一个 **Mac 开发环境配置笔记仓库**，收集终端工具、开发工具、输入法等配置文档和脚本，非代码项目。

## 目录结构约定

使用数字前缀分类组织：
- `01-终端工具/` - Kitty、iTerm2、Ghostty、OhMyZsh、fish
- `02-开发工具/` - Homebrew、mise、Xcode、opt（MonkeyDev、theos、LLDB工具）
- `03-输入法/` - Rime 配置
- `04-其他工具/` - Typora 主题、越狱工具

添加新工具时遵循此命名约定。

## 文档编写规范

- 使用中文编写
- 包含：简介、安装方法、配置示例、常用命令、参考资料链接
- 参考现有文档格式（如 `02-开发工具/mise/mise.md`）

## 添加新工具流程

1. 在对应分类目录下创建子目录（如 `02-开发工具/<工具名>/`）
2. 编写文档 `<工具名>.md`
3. 如有配置文件、脚本、字体等一并放入该目录
4. 提交并推送

## Git 约定

- commit message 使用中文，简洁描述添加/修改的内容
- 直接推送到 main 分支