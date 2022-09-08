[toc]

# 常用的Mac开发环境

### Homebrew安装

```shell
/bin/zsh -c "$(curl -fsSL https://gitee.com/cunkai/HomebrewCN/raw/master/Homebrew.sh)"
```

### Python安装



### iTerm2安装

官网地址：http://iterm2.com/downloads.html

博客：https://zhuanlan.zhihu.com/p/550022490

### oh-my-zsh安装

oh-my-zsh 的官网地址：https://ohmyz.sh/

```shell
sh -c "$(curl -fsSL https://raw.github.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"
```



#### 修改默认的 shell

安装完成之后，在 `/bin` 目录下会多出一个 `zsh` 的文件。

你可以通过以下命令来查看：

```text
cat /etc/shells
```

注意，`cat` 后面是有个空格的。

![image-20220908114356028](README.assets/image-20220908114356028.png)

其次，macOS 在 Catalina 版本之前都是使用 `dash` 作为终端，

如果你想修改为 `zsh` ，可以使用以下命令：

```text
chsh -s /bin/zsh
```

当然，你后悔了，想改回原来的 `dash` ，同样使用上面的 `chsh` 命令就可以。

```text
chsh -s /bin/bash
```

#### 修改主题

主题目录：`~/.oh-my-zsh/themes`

Github 地址：https://github.com/ohmyzsh/ohmyzsh/wiki/themes

```text
vim ~/.zshrc
```

```shell
ZSH_THEME="spaceship"
```

**powerlevel9k**主题安装

- 用 powerlevel9k 为例，通过 `git clone` 下载到 oh-my-zsh 放置第三方主题的目录中

- ```text
  git clone https://github.com/bhilburn/powerlevel9k.git ~/.oh-my-zsh/custom/themes/powerlevel9k
  ```

- 修改`ZSH_THEME="spaceship"`为`ZSH_THEME="powerlevel9k"`

- ```text
  source ~/.zshrc
  ```

**安装 powerline 和 PowerFonts**

官网地址：https://powerline.readthedocs.io/en/latest/installation.html

```shell
pip install powerline-status
```

当然安装之前要确保你已经安装了 python 环境和 pip , python 环境一般 Mac 系统都会自带的，所以如果你在安装过程中遇到：

```text
zsh: command not found: pip
```

你也可以通过命令来安装

```text
sudo easy_install pip
```

PowerFonts 是一个字体库，要安装字体库需要先把 `git clone` 到本地，然后执行源码中的 `install.sh` 

具体的流程如下：

```text
# git clone
git clone https://github.com/powerline/fonts.git --depth=1
# install
cd fonts
./install.sh
# clean-up a bit
cd ..
rm -rf fonts
```

#### 插件

```shell
plugins=(
  git
  zsh-syntax-highlighting
  zsh-autosuggestions
  history
  z
)
```

**zsh-syntax-highlighting安装**

- ```shell
  cd ~/.oh-my-zsh/custom/plugins/
  git clone https://github.com/zsh-users/zsh-syntax-highlighting.git
  ```

- 然后在文件末尾添加：

- ```shell
  source ~/.oh-my-zsh/custom/plugins/zsh-syntax-highlighting/zsh-syntax-highlighting.zsh
  # source /usr/local/share/zsh-syntax-highlighting/zsh-syntax-highlighting.zsh # 如果使用命令 brew 安装，则是添加这条命令语句
  ```

- ```shell
  source ~/.zshrc
  ```

**zsh-autosuggestions安装**

- ```shell
  cd ~/.oh-my-zsh/custom/plugins/
  git clone https://github.com/zsh-users/zsh-autosuggestions
  ```

- 
