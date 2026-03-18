### Xcode Intelligence配置

要求

macOS 26.3

Xcode26.3

#### 安装 Claude Agent 组件

打开 Xcode → Settings → Intelligence → 找到 Anthropic 下方的「Claude Agent」→ 点击「安装」。

安装完成后，会出现一个输入 API Key 的输入框，暂时不要填写，后续配置完成后再补充。

##### 设置 API Key Override（关键前置）

这一步的作用是告诉 Xcode：“使用自定义 API Key，不启用内置的付费认证流程”，操作如下：

打开 macOS 终端（Terminal），复制并执行以下命令：

```text
defaults write com.apple.dt.Xcode IDEChatClaudeAgentAPIKeyOverride ' '
```

⚠️ 重点提醒：命令中最后的值是「一个空格」（' '），不是空字符串（''），否则会触发 Xcode 默认认证流程，导致后续配置失效。

#### 配置自定义 API 端点

这一步是解决国内访问问题的关键，我们需要创建配置目录和配置文件，将请求指向国内可访问的 Anthropic 兼容接口。

1. 首先创建配置目录，终端执行以下命令（自动创建多级目录，无需手动新建）：

```text
mkdir -p ~/Library/Developer/Xcode/CodingAssistant/ClaudeAgentConfig
```

1. 新建并编辑 settings.json 配置文件，终端执行命令（可直接创建并打开文件，若无法打开，可手动进入目录新建）：

```text
touch ~/Library/Developer/Xcode/CodingAssistant/ClaudeAgentConfig/settings.json
```

1. 打开 settings.json 文件，粘贴以下内容，替换对应参数：

- Kimi：

```json
{
  "env": {
    "ANTHROPIC_AUTH_TOKEN": "你的API密钥",
    "ANTHROPIC_BASE_URL": "https://api.ofox.ai/anthropic"
  }
}
```

- 阿里百炼

> 打开 Xcode → Settings → Intelligence → 找到 Anthropic 下方的「Claude Agent」→ 点击添加API_KEY后，选择默认model为`default`，然后输入下面的配置，重启Xcode即可生效

```json
{
  "env": {
    "ANTHROPIC_AUTH_TOKEN": "你的API密钥",
    "ANTHROPIC_BASE_URL": "https://api.ofox.ai/anthropic",
    "ANTHROPIC_MODEL": "qwen3.5-plus"
  }
}
```

### 替换Xcode内置的claud

通过官方命令下载的claude路径为：

```
curl -fsSL https://claude.ai/install.sh | bash
```

安装路径

```
/Users/ninebot/.local/share/claude/versions
```

将 `~/Library/Developer/Xcode/CodingAssistant/Agents/Versions/` 目录下的 `claude` 二进制文件，直接替换为 Anthropic 提供的最新版本。

参考链接：https://fatbobman.com/zh/posts/xcode-263-claude/