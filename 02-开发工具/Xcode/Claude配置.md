### 安装

```bash
curl -fsSL https://claude.ai/install.sh | bash
```

安装后的路径为：
```
/Users/ninebot/.local/share/claude/versions
```

### 配置定三方大模型

```json
.claude tree -L 1
.
├── backups
├── cache
├── debug
├── downloads
├── file-history
├── history.jsonl
├── plans
├── plugins
├── projects
├── rules
├── session-env
├── sessions
├── settings.json
├── settings.local.json
├── shell-snapshots
├── skills
├── tasks
└── telemetry
```

打开`settings.json`文件内容进行修改：

```json
{
  "env": {
    "ANTHROPIC_AUTH_TOKEN": "sk-kimi-r18d1Q3gJyMo5cVjVFeCMGsCmUbpfKMrfkiDZy50M76Rxv2hgFUO2coeiRpdzFAt",
    "ANTHROPIC_BASE_URL": "https://api.kimi.com/coding/",
    "ANTHROPIC_MODEL": "kimi-for-coding"
  },
  "permissions": {
    "allow": [
      "mcp__pencil"
    ]
  },
  "enabledPlugins": {
    "obsidian@obsidian-skills": true,
    "frontend-design@claude-plugins-official": true,
    "swift-lsp@claude-plugins-official": true,
    "everything-claude-code@everything-claude-code": true,
    "ralph-loop@claude-plugins-official": true,
    "playwright@claude-plugins-official": true
  }
}
```

如果不生效环境变量也设置一下：

> 这个一般是给Obsidian软件使用的

```bash
export ANTHROPIC_BASE_URL="https://api.kimi.com/coding/"
export ANTHROPIC_API_KEY="sk-kimi-r18d1Q3gJyMo5cVjVFeCMGsCmUbpfKMrfkiDZy50M76Rxv2hgFUO2coeiRpdzFAt"
```

