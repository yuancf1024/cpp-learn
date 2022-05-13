# 2022-03-04linux-runoob-notes

[toc]

# Linux

## Linux 教程

Linux 是一种自由和开放源码的类 UNIX 操作系统。

Linux 英文解释为 Linux is not Unix。

Linux 是在 1991 由林纳斯·托瓦兹在赫尔辛基大学上学时创立的，主要受到 Minix 和 Unix 思想的启发。

本教程，我们将为大家介绍如何使用 Linux。

Linux 其实很容易学，相信你们能很快学会。

**谁适合阅读？**

本教程针对的是Linux服务器方面的知识，适合从事运维或后端开发的人员阅读。

**需要具备的知识？**

如果你熟悉操作系统方面的知识，相信你会很快学会 Linux。

本教程将于 Linux 的发行版本 Centos 为例来为大家介绍 Linux 系统的应用。

**Linux 是开源的**

Linux 遵循 GNU 通用公共许可证（GPL），任何个人和机构都可以自由地使用 Linux 的所有底层源代码，也可以自由地修改和再发布。

由于 Linux 是自由软件，任何人都可以创建一个符合自己需求的 Linux 发行版。

目前主流的 Linux 版本有：

- Debian（及其派生版本Ubuntu、Linux Mint）

- Fedora（及其相关版本Red Hat Enterprise Linux、CentOS）

- openSUSE

- ...

## Linux 简介

Linux 内核最初只是由芬兰人林纳斯·托瓦兹（Linus Torvalds）在赫尔辛基大学上学时出于个人爱好而编写的。

Linux 是一套免费使用和自由传播的类 Unix 操作系统，是一个基于 POSIX 和 UNIX 的多用户、多任务、支持多线程和多 CPU 的操作系统。

Linux 能运行主要的 UNIX 工具软件、应用程序和网络协议。它支持 32 位和 64 位硬件。Linux 继承了 Unix 以网络为核心的设计思想，是一个性能稳定的多用户网络操作系统。

**Linux 的发行版**

Linux 的发行版说简单点就是将 Linux 内核与应用软件做一个打包。

![Linux内核](https://www.runoob.com/wp-content/uploads/2014/06/1511849829609658.jpg)

目前市面上较知名的发行版有：Ubuntu、RedHat、CentOS、Debian、Fedora、SuSE、OpenSUSE、Arch Linux、SolusOS 等。

![知名发行版](https://www.runoob.com/wp-content/uploads/2014/06/wKioL1bvVPWAu7hqAAEyirVUn3c446.jpg-wh_651x-s_3197843091.jpg)

**Linux 应用领域**

今天各种场合都有使用各种 Linux 发行版，从嵌入式设备到超级计算机，并且在服务器领域确定了地位，通常服务器使用 LAMP（Linux + Apache + MySQL + PHP）或 LNMP（Linux + Nginx+ MySQL + PHP）组合。

目前 Linux 不仅在家庭与企业中使用，并且在政府中也很受欢迎。

- 巴西联邦政府由于支持 Linux 而世界闻名。
- 有新闻报道俄罗斯军队自己制造的 Linux 发布版的，做为 G.H.ost 项目已经取得成果。
- 印度的 Kerala 联邦计划在向全联邦的高中推广使用 Linux。
- 中华人民共和国为取得技术独立，在龙芯处理器中排他性地使用 Linux。
- 在西班牙的一些地区开发了自己的 Linux 发布版，并且在政府与教育领域广泛使用，如 Extremadura 地区的 gnuLinEx 和 Andalusia 地区的 Guadalinex。
- 葡萄牙同样使用自己的 Linux 发布版 Caixa Mágica，用于 Magalh?es 笔记本电脑和 e-escola 政府软件。
- 法国和德国同样开始逐步采用 Linux。

**Linux vs Windows**

目前国内 Linux 更多的是应用于服务器上，而桌面操作系统更多使用的是 Windows。主要区别如下

|比较|	Windows|	Linux |
| - | - | - |
|界面|	界面统一，外壳程序固定所有 Windows 程序菜单几乎一致，快捷键也几乎相同|	图形界面风格依发布版不同而不同，可能互不兼容。GNU/Linux 的终端机是从 UNIX 传承下来，基本命令和操作方法也几乎一致。|
|驱动程序|	驱动程序丰富，版本更新频繁。默认安装程序里面一般包含有该版本发布时流行的硬件驱动程序，之后所出的新硬件驱动依赖于硬件厂商提供。对于一些老硬件，如果没有了原配的驱动有时很难支持。另外，有时硬件厂商未提供所需版本的 Windows 下的驱动，也会比较头痛。|	由志愿者开发，由 Linux 核心开发小组发布，很多硬件厂商基于版权考虑并未提供驱动程序，尽管多数无需手动安装，但是涉及安装则相对复杂，使得新用户面对驱动程序问题（是否存在和安装方法）会一筹莫展。但是在开源开发模式下，许多老硬件尽管在Windows下很难支持的也容易找到驱动。HP、Intel、AMD 等硬件厂商逐步不同程度支持开源驱动，问题正在得到缓解。|
|使用|	使用比较简单，容易入门。图形化界面对没有计算机背景知识的用户使用十分有利。|	图形界面使用简单，容易入门。文字界面，需要学习才能掌握。|
|学习|	系统构造复杂、变化频繁，且知识、技能淘汰快，深入学习困难。|	系统构造简单、稳定，且知识、技能传承性好，深入学习相对容易。|
|软件|	每一种特定功能可能都需要商业软件的支持，需要购买相应的授权。|	大部分软件都可以自由获取，同样功能的软件选择较少。|

## Linux 安装

本章节我们将为大家介绍 Linux 的安装，安装步骤比较繁琐，现在其实云服务器挺普遍的，价格也便宜，如果自己不想搭建，也可以直接买一台学习用用，参考各大云服务器比较。

本章节以 centos6.4 为例。

centos 下载地址：

可以去官网下载最新版本：https://www.centos.org/download/

![Download CentOS](https://www.runoob.com/wp-content/uploads/2017/06/1497342019-2668-2a90-3944-9027-0352de39b1fe.jpg)

以下针对各个版本的ISO镜像文件，进行一一说明：

- CentOS-7.0-x86_64-DVD-1503-01.iso : 标准安装版，一般下载这个就可以了（推荐）
- CentOS-7.0-x86_64-NetInstall-1503-01.iso : 网络安装镜像（从网络安装或者救援系统）
- CentOS-7.0-x86_64-Everything-1503-01.iso: 对完整版安装盘的软件进行补充，集成所有软件。（包含centos7的一套完整的软件包，可以用来安装系统或者填充本地镜像）
- CentOS-7.0-x86_64-GnomeLive-1503-01.iso: GNOME桌面版
- CentOS-7.0-x86_64-KdeLive-1503-01.iso: KDE桌面版
- CentOS-7.0-x86_64-livecd-1503-01.iso : 光盘上运行的系统，类拟于winpe
- CentOS-7.0-x86_64-minimal-1503-01.iso : 精简版，自带的软件最少

> 注：建议安装64位Linux系统。
> 旧版本下载地址：https://wiki.centos.org/Download

接下来你需要将下载的Linux系统刻录成光盘或U盘。
注：你也可以在Window上安装VMware虚拟机来安装Linux系统。

**Ubuntu20.04LTS 可参考网上教程帖子，WSL可参考Microsoft官网帮助文档。**

## Linux云服务器

云服务器(Elastic Compute Service, ECS)是一种简单高效、安全可靠、处理能力可弹性伸缩的计算服务。

云服务器管理方式比物理服务器更简单高效，我们无需提前购买昂贵的硬件，即可迅速创建或删除云服务器，云服务器费用一般在几十到几百不等，可以根据我们的需求配置。

目前市场上的云服务器很多，阿里云开年活动力度比较大，参见如下。

[阿里云服务器](https://www.runoob.com/linux/linux-cloud-server.html)


## Linux 系统启动过程

linux启动时我们会看到许多启动信息。
Linux系统的启动过程并不是大家想象中的那么复杂，其过程可以分为5个阶段：

1. 内核的引导。
2. 运行 init。
3. 系统初始化。
4. 建立终端 。
5. 用户登录系统。

> init程序的类型：
> - SysV: init, CentOS 5之前, 配置文件： /etc/inittab。
> - Upstart: init,CentOS 6, 配置文件： /etc/inittab, /etc/init/*.conf。
> - Systemd： systemd, CentOS 7,配置文件： /usr/lib/systemd/system、 /etc/systemd/system。


**内核引导**

当计算机打开电源后，首先是BIOS(电脑的基本输入输出系统)开机自检，按照BIOS中设置的启动设备（通常是硬盘）来启动。
操作系统接管硬件以后，首先读入 /boot 目录下的内核文件。

![内核引导](https://www.runoob.com/wp-content/uploads/2014/06/bg2013081702.png)

**运行init**

init 进程是系统所有进程的起点，你可以把它比拟成系统所有进程的老祖宗，没有这个进程，系统中任何进程都不会启动。

init 程序首先是需要读取配置文件 /etc/inittab。

![运行init](https://www.runoob.com/wp-content/uploads/2014/06/bg2013081703.png)

**运行级别**

许多程序需要开机启动。它们在Windows叫做"服务"（service），在Linux就叫做"守护进程"（daemon）。

init进程的一大任务，就是去运行这些开机启动的程序。

但是，不同的场合需要启动不同的程序，比如用作服务器时，需要启动Apache，用作桌面就不需要。

Linux允许为不同的场合，分配不同的开机启动程序，这就叫做"运行级别"（runlevel）。也就是说，**启动时根据"运行级别"，确定要运行哪些程序**。

![运行级别](https://www.runoob.com/wp-content/uploads/2014/06/bg2013081704.png)

Linux系统有7个运行级别(runlevel)：

- 运行级别0：系统停机状态，系统默认运行级别不能设为0，否则不能正常启动
- 运行级别1：单用户工作状态，root权限，用于系统维护，禁止远程登陆
- 运行级别2：多用户状态(没有NFS)
- 运行级别3：完全的多用户状态(有NFS)，登陆后进入控制台命令行模式
- 运行级别4：系统未使用，保留
- 运行级别5：X11控制台，登陆后进入图形GUI模式
- 运行级别6：系统正常关闭并重启，默认运行级别不能设为6，否则不能正常启动

**系统初始化**

在init的配置文件中有这么一行： `si::sysinit:/etc/rc.d/rc.sysinit`　它调用执行了`/etc/rc.d/rc.sysinit`，而rc.sysinit是一个bash shell的脚本，它主要是完成一些系统初始化的工作，rc.sysinit是每一个运行级别都要首先运行的重要脚本。

它主要完成的工作有：激活交换分区，检查磁盘，加载硬件模块以及其它一些需要优先执行任务。

```shell
l5:5:wait:/etc/rc.d/rc 5
```

这一行表示以5为参数运行/etc/rc.d/rc，/etc/rc.d/rc是一个Shell脚本，它接受5作为参数，去执行/etc/rc.d/rc5.d/目录下的所有的rc启动脚本，/etc/rc.d/rc5.d/目录中的这些启动脚本实际上都是一些连接文件，而不是真正的rc启动脚本，真正的rc启动脚本实际上都是放在/etc/rc.d/init.d/目录下。

而这些rc启动脚本有着类似的用法，它们一般能接受start、stop、restart、status等参数。

/etc/rc.d/rc5.d/中的rc启动脚本通常是K或S开头的连接文件，对于以 S 开头的启动脚本，将以start参数来运行。

而如果发现存在相应的脚本也存在K打头的连接，而且已经处于运行态了(以/var/lock/subsys/下的文件作为标志)，则将首先以stop为参数停止这些已经启动了的守护进程，然后再重新运行。

这样做是为了保证是当init改变运行级别时，所有相关的守护进程都将重启。

至于在每个运行级中将运行哪些守护进程，用户可以通过chkconfig或setup中的"System Services"来自行设定。

![系统初始化](https://www.runoob.com/wp-content/uploads/2014/06/bg2013081705.png)

**建立终端**

rc执行完毕后，返回init。这时基本系统环境已经设置好了，各种守护进程也已经启动了。

init接下来会打开6个终端，以便用户登录系统。在inittab中的以下6行就是定义了6个终端：

```shell
1:2345:respawn:/sbin/mingetty tty1
2:2345:respawn:/sbin/mingetty tty2
3:2345:respawn:/sbin/mingetty tty3
4:2345:respawn:/sbin/mingetty tty4
5:2345:respawn:/sbin/mingetty tty5
6:2345:respawn:/sbin/mingetty tty6
```

从上面可以看出在2、3、4、5的运行级别中都将以respawn方式运行mingetty程序，mingetty程序能打开终端、设置模式。

同时它会显示一个文本登录界面，这个界面就是我们经常看到的登录界面，在这个登录界面中会提示用户输入用户名，而用户输入的用户将作为参数传给login程序来验证用户的身份。

**用户登录系统**

一般来说，用户的登录方式有三种：

（1）命令行登录
（2）ssh登录
（3）图形界面登录

![用户登录系统](https://www.runoob.com/wp-content/uploads/2014/06/bg2013081706.png)

对于运行级别为5的图形方式用户来说，他们的登录是通过一个图形化的登录界面。登录成功后可以直接进入 KDE、Gnome 等窗口管理器。

而本文主要讲的还是文本方式登录的情况：当我们看到mingetty的登录界面时，我们就可以输入用户名和密码来登录系统了。

Linux 的账号验证程序是 login，login 会接收 mingetty 传来的用户名作为用户名参数。

然后 login 会对用户名进行分析：如果用户名不是 root，且存在 /etc/nologin 文件，login 将输出 nologin 文件的内容，然后退出。

这通常用来系统维护时防止非root用户登录。只有/etc/securetty中登记了的终端才允许 root 用户登录，如果不存在这个文件，则 root 用户可以在任何终端上登录。

/etc/usertty文件用于对用户作出附加访问限制，如果不存在这个文件，则没有其他限制。

**图形模式与文字模式的切换方式**

Linux预设提供了六个命令窗口终端机让我们来登录。

默认我们登录的就是第一个窗口，也就是tty1，这个六个窗口分别为tty1,tty2 … tty6，你可以按下Ctrl + Alt + F1 ~ F6 来切换它们。

如果你安装了图形界面，默认情况下是进入图形界面的，此时你就可以按Ctrl + Alt + F1 ~ F6来进入其中一个命令窗口界面。

当你进入命令窗口界面后再返回图形界面只要按下Ctrl + Alt + F7 就回来了。

如果你用的vmware 虚拟机，命令窗口切换的快捷键为 Alt + Space + F1~F6. 

如果你在图形界面下请按Alt + Shift + Ctrl + F1~F6 切换至命令窗口。

![图形模式与文字模式的切换方式](https://www.runoob.com/wp-content/uploads/2014/06/bg2013081707.png)

**Linux 关机**

在linux领域内大多用在服务器上，很少遇到关机的操作。毕竟服务器上跑一个服务是永无止境的，除非特殊情况下，不得已才会关机。

正确的关机流程为：sync > shutdown > reboot > halt

关机指令为：shutdown ，你可以man shutdown 来看一下帮助文档。

例如你可以运行如下命令关机：

```shell
sync # 将数据由内存同步到硬盘中。

shutdown # 关机指令，你可以man shutdown 来看一下帮助文档。例如你可以运行如下命令关机：

shutdown –h 10 ‘This server will shutdown after 10 mins’ # 这个命令告诉大家，计算机将在10分钟后关机，并且会显示在登陆用户的当前屏幕中。

shutdown –h now # 立马关机

shutdown –h 20:25 # 系统会在今天20:25关机

shutdown –h +10 # 十分钟后关机

shutdown –r now # 系统立马重启

shutdown –r +10 # 系统十分钟后重启

reboot # 就是重启，等同于 shutdown –r now

halt # 关闭系统，等同于shutdown –h now 和 poweroff
```

最后总结一下，不管是重启系统还是关闭系统，首先要运行 sync 命令，把内存中的数据写到磁盘中。

关机的命令有 `shutdown –h now halt poweroff` 和 `init 0` , 重启系统的命令有 `shutdown –r now reboot init 6`。

**参考文章：**
- http://www.ruanyifeng.com/blog/2013/08/linux_boot_process.html

## Linux 系统目录结构

登录系统后，在当前命令窗口下输入命令：

```shell
# Ubuntu20.04 的目录结构
yuancf1024@LAPTOP-22O3I9E3:/$ ls
bin   dev  home  lib    lib64   lost+found  mnt  proc  run   snap  sys  usr
boot  etc  init  lib32  libx32  media       opt  root  sbin  srv   tmp  var
```

树状目录结构：
![树状目录结构](https://www.runoob.com/wp-content/uploads/2014/06/d0c50-linux2bfile2bsystem2bhierarchy.jpg)

以下是对这些目录的解释：

- /bin：bin 是 Binaries (二进制文件) 的缩写, 这个目录存放着最经常使用的命令。

- /boot：这里存放的是启动 Linux 时使用的一些核心文件，包括一些连接文件以及镜像文件。

- /dev ：dev 是 Device(设备) 的缩写, 该目录下存放的是 Linux 的外部设备，在 Linux 中访问设备的方式和访问文件的方式是相同的。

- /etc：etc 是 Etcetera(等等) 的缩写,这个目录用来存放所有的系统管理所需要的配置文件和子目录。

- /home：用户的主目录，在 Linux 中，每个用户都有一个自己的目录，一般该目录名是以用户的账号命名的，如上图中的 alice、bob 和 eve。

- /lib：lib 是 Library(库) 的缩写这个目录里存放着系统最基本的动态连接共享库，其作用类似于 Windows 里的 DLL 文件。几乎所有的应用程序都需要用到这些共享库。

- /lost+found：这个目录一般情况下是空的，当系统非法关机后，这里就存放了一些文件。

- /media：linux 系统会自动识别一些设备，例如U盘、光驱等等，当识别后，Linux 会把识别的设备挂载到这个目录下。

- /mnt：系统提供该目录是为了让用户临时挂载别的文件系统的，我们可以将光驱挂载在 /mnt/ 上，然后进入该目录就可以查看光驱里的内容了。

- /opt：opt 是 optional(可选) 的缩写，这是给主机额外安装软件所摆放的目录。比如你安装一个ORACLE数据库则就可以放到这个目录下。默认是空的。

- /proc：proc 是 Processes(进程) 的缩写，/proc 是一种伪文件系统（也即虚拟文件系统），存储的是当前内核运行状态的一系列特殊文件，这个目录是一个虚拟的目录，它是系统内存的映射，我们可以通过直接访问这个目录来获取系统信息。
这个目录的内容不在硬盘上而是在内存里，我们也可以直接修改里面的某些文件，比如可以通过下面的命令来屏蔽主机的ping命令，使别人无法ping你的机器：

> echo 1 > /proc/sys/net/ipv4/icmp_echo_ignore_all
- /root：该目录为系统管理员，也称作超级权限者的用户主目录。

- /sbin：s 就是 Super User 的意思，是 Superuser Binaries (超级用户的二进制文件) 的缩写，这里存放的是系统管理员使用的系统管理程序。

- /selinux：这个目录是 Redhat/CentOS 所特有的目录，Selinux 是一个安全机制，类似于 windows 的防火墙，但是这套机制比较复杂，这个目录就是存放selinux相关的文件的。

- /srv：该目录存放一些服务启动之后需要提取的数据。

- /sys：这是 Linux2.6 内核的一个很大的变化。该目录下安装了 2.6 内核中新出现的一个文件系统 sysfs 。
sysfs 文件系统集成了下面3种文件系统的信息：针对进程信息的 proc 文件系统、针对设备的 devfs 文件系统以及针对伪终端的 devpts 文件系统。

该文件系统是内核设备树的一个直观反映。

当一个内核对象被创建的时候，对应的文件和目录也在内核对象子系统中被创建。

- /tmp：tmp 是 temporary(临时) 的缩写这个目录是用来存放一些临时文件的。

- /usr：usr 是 unix shared resources(共享资源) 的缩写，这是一个非常重要的目录，用户的很多应用程序和文件都放在这个目录下，类似于 windows 下的 program files 目录。

- /usr/bin：系统用户使用的应用程序。

- /usr/sbin：超级用户使用的比较高级的管理程序和系统守护程序。

- /usr/src：内核源代码默认的放置目录。

- /var：var 是 variable(变量) 的缩写，这个目录中存放着在不断扩充着的东西，我们习惯将那些经常被修改的目录放在这个目录下。包括各种日志文件。

- /run：是一个临时文件系统，存储系统启动以来的信息。当系统重启时，这个目录下的文件应该被删掉或清除。如果你的系统上有 /var/run 目录，应该让它指向 run。

在 Linux 系统中，有几个目录是比较重要的，平时需要注意不要误删除或者随意更改内部文件。

/etc： 上边也提到了，这个是系统中的配置文件，如果你更改了该目录下的某个文件可能会导致系统不能启动。

/bin, /sbin, /usr/bin, /usr/sbin: 这是系统预设的执行文件的放置目录，比如 ls 就是在 /bin/ls 目录下的。

值得提出的是 /bin、/usr/bin 是给系统用户使用的指令（除 root 外的通用用户），而/sbin, /usr/sbin 则是给 root 使用的指令。

/var： 这是一个非常重要的目录，系统上跑了很多程序，那么每个程序都会有相应的日志产生，而这些日志就被记录到这个目录下，具体在 /var/log 目录下，另外 mail 的预设放置也是在这里。

**补充笔记**

在 Linux 或 Unix 操作系统中，所有的文件和目录都被组织成以一个根节点开始的倒置的树状结构。

文件系统的最顶层是由根目录开始的，*系统使用 / 来表示根目录。在根目录之下的既可以是目录，也可以是文件*，而每一个目录中又可以包含子目录文件。如此反复就可以构成一个庞大的文件系统。

在Linux文件系统中有两个特殊的目录，一个用户所在的工作目录，也叫当前目录，可以使用一个点 . 来表示；另一个是当前目录的上一级目录，也叫父目录，可以使用两个点 .. 来表示。

- . ：代表当前的目录，也可以使用 ./ 来表示；
- .. ：代表上一层目录，也可以 ../ 来代表。

如果一个目录或文件名以一个点 . 开始，表示这个目录或文件是一个隐藏目录或文件(如：.bashrc)。即以默认方式查找时，不显示该目录或文件。

**系统启动必须：**

- /boot：存放的启动Linux 时使用的内核文件，包括连接文件以及镜像文件。
- /etc：存放所有的系统需要的配置文件和子目录列表，更改目录下的文件可能会导致系统不能启动。
- /lib：存放基本代码库（比如c++库），其作用类似于Windows里的DLL文件。几乎所有的应用程序都需要用到这些共享库。
- /sys： 这是linux2.6内核的一个很大的变化。该目录下安装了2.6内核中新出现的一个文件系统 sysfs 。sysfs文件系统集成了下面3种文件系统的信息：针对进程信息的proc文件系统、针对设备的devfs文件系统以及针对伪终端的devpts文件系统。该文件系统是内核设备树的一个直观反映。当一个内核对象被创建的时候，对应的文件和目录也在内核对象子系统中


**指令集合：**

- /bin：存放着最常用的程序和指令
- /sbin：只有系统管理员能使用的程序和指令。


**外部文件管理：**

- /dev ：Device(设备)的缩写, 存放的是Linux的外部设备。注意：在Linux中访问设备和访问文件的方式是相同的。
- /media：类windows的其他设备，例如U盘、光驱等等，识别后linux会把设备放到这个目录下。
- /mnt：临时挂载别的文件系统的，我们可以将光驱挂载在/mnt/上，然后进入该目录就可以查看光驱里的内容了。


**临时文件：**

- /run：是一个临时文件系统，存储系统启动以来的信息。当系统重启时，这个目录下的文件应该被删掉或清除。如果你的系统上有 /var/run 目录，应该让它指向 run。
- /lost+found：一般情况下为空的，系统非法关机后，这里就存放一些文件。
- /tmp：这个目录是用来存放一些临时文件的。


**账户：**

- /root：系统管理员的用户主目录。
- /home：用户的主目录，以用户的账号命名的。
- /usr：用户的很多应用程序和文件都放在这个目录下，类似于windows下的program files目录。
- /usr/bin：系统用户使用的应用程序与指令。
- /usr/sbin：超级用户使用的比较高级的管理程序和系统守护程序。
- /usr/src：内核源代码默认的放置目录。

**运行过程中要用：**

- /var：存放经常修改的数据，比如程序运行的日志文件（/var/log 目录下）。
- /proc：管理内存空间！虚拟的目录，是系统内存的映射，我们可以直接访问这个目录来，获取系统信息。这个目录的内容不在硬盘上而是在内存里，我们也可以直接修改里面的某些文件来做修改。

**扩展用的：**

- /opt：默认是空的，我们安装额外软件可以放在这个里面。
- /srv：存放服务启动后需要提取的数据（不用服务器就是空）

## Linux 忘记密码解决方法

很多朋友经常会忘记Linux系统的root密码，linux系统忘记root密码的情况该怎么办呢？重新安装系统吗？当然不用！进入单用户模式更改一下root密码即可。

步骤如下：

具体教程过于老旧，可参考网上博客帖子。

## Linux 远程登录

## Linux 文件基本属性

Linux 系统是一种典型的多用户系统，不同的用户处于不同的地位，拥有不同的权限。

为了保护系统的安全性，Linux 系统对不同的用户访问同一文件（包括目录文件）的权限做了不同的规定。

在 Linux 中我们通常使用以下两个命令来修改文件或目录的所属用户与权限：

- chown (change owner) ： 修改所属用户与组。
- chmod (change mode) ： 修改用户的权限。

下图中通过 chown 来授权用户，通过 chmod 为用户设置可以开门的权限。

![chown & chmod](https://www.runoob.com/wp-content/uploads/2014/06/1_151733904241.png)

在 Linux 中我们可以使用 `ll` 或者 `ls –l` 命令来显示一个文件的属性以及文件所属的用户和组，如：

```shell
yuancf1024@LAPTOP-22O3I9E3:/$ ls -l
total 396
lrwxrwxrwx   1 root root      7 Aug 20  2021 bin -> usr/bin
drwxr-xr-x   2 root root   4096 Aug 20  2021 boot
drwxr-xr-x   8 root root   2720 Mar  4 10:50 dev
drwxr-xr-x 102 root root   4096 Mar  4 11:14 etc
drwxr-xr-x   3 root root   4096 Feb 23 17:11 home
-rwxr-xr-x   2 root root 636192 Jan 24 21:19 init
lrwxrwxrwx   1 root root      7 Aug 20  2021 lib -> usr/lib
lrwxrwxrwx   1 root root      9 Aug 20  2021 lib32 -> usr/lib32
lrwxrwxrwx   1 root root      9 Aug 20  2021 lib64 -> usr/lib64
lrwxrwxrwx   1 root root     10 Aug 20  2021 libx32 -> usr/libx32
drwx------   2 root root  16384 Apr 11  2019 lost+found
drwxr-xr-x   2 root root   4096 Aug 20  2021 media
drwxr-xr-x   5 root root   4096 Feb 23 10:12 mnt
drwxr-xr-x   3 root root   4096 Mar  4 10:02 opt
dr-xr-xr-x 238 root root      0 Mar  4 10:50 proc
drwx------   2 root root   4096 Mar  4 10:39 root
drwxr-xr-x  11 root root    300 Mar  4 10:53 run
lrwxrwxrwx   1 root root      8 Aug 20  2021 sbin -> usr/sbin
drwxr-xr-x   6 root root   4096 Aug 20  2021 snap
drwxr-xr-x   2 root root   4096 Aug 20  2021 srv
dr-xr-xr-x  11 root root      0 Mar  4 10:50 sys
drwxrwxrwt  22 root root   4096 Mar  4 14:35 tmp
drwxr-xr-x  14 root root   4096 Feb 22 22:58 usr
drwxr-xr-x  13 root root   4096 Aug 20  2021 var
```

实例中，bin 文件的第一个属性用 d 表示。d 在 Linux 中代表该文件是一个目录文件。

在 Linux 中第一个字符代表这个文件是目录、文件或链接文件等等。

- 当为 d 则是目录
- 当为 - 则是文件；
- 若是 l 则表示为链接文档(link file)；
- 若是 b 则表示为装置文件里面的可供储存的接口设备(可随机存取装置)；
- 若是 c 则表示为装置文件里面的串行端口设备，例如键盘、鼠标(一次性读取装置)。

接下来的字符中，以三个为一组，且均为 rwx 的三个参数的组合。其中，**r 代表可读(read)、 w 代表可写(write)、 x 代表可执行(execute)**。 要注意的是，这三个权限的位置不会改变，如果没有权限，就会出现减号 - 而已。

![Linux文件基本属性](https://www.runoob.com/wp-content/uploads/2014/06/file-llls22.jpg)


每个文件的属性由左边第一部分的 10 个字符来确定（如下图）。

![文件的属性](https://www.runoob.com/wp-content/uploads/2014/06/363003_1227493859FdXT.png)

从左至右用 0-9 这些数字来表示。

第 0 位确定**文件类型**，第 1-3 位**确定属主（该文件的所有者）拥有该文件的权限**。

第4-6位**确定属组（所有者的同组用户）拥有该文件的权限**，第7-9位**确定其他用户拥有该文件的权限**。
其中，第 1、4、7 位表示读权限，如果用 r 字符表示，则有读权限，如果用 - 字符表示，则没有读权限；

第 2、5、8 位表示写权限，如果用 w 字符表示，则有写权限，如果用 - 字符表示没有写权限；第 3、6、9 位表示可执行权限，如果用 x 字符表示，则有执行权限，如果用 - 字符表示，则没有执行权限。

**Linux文件属主和属组**

```shell
[root@www /]# ls -l
total 64
drwxr-xr-x 2 root  root  4096 Feb 15 14:46 cron
drwxr-xr-x 3 mysql mysql 4096 Apr 21  2014 mysql
```

对于文件来说，它都有一个特定的所有者，也就是对该文件具有所有权的用户。

同时，在Linux系统中，用户是按组分类的，一个用户属于一个或多个组。

文件所有者以外的用户又可以分为文件所属组的同组用户和其他用户。

因此，Linux系统按**文件所有者、文件所有者同组用户和其他用户**来规定了不同的文件访问权限。

在以上实例中，mysql 文件是一个目录文件，属主和属组都为 mysql，属主有可读、可写、可执行的权限；与属主同组的其他用户有可读和可执行的权限；其他用户也有可读和可执行的权限。

对于 root 用户来说，一般情况下，文件的权限对其不起作用。

**更改文件属性**

1、chgrp：更改文件属组

语法：
```shell
chgrp [-R] 属组名 文件名
```
参数选项

- -R：递归更改文件属组，就是在更改某个目录文件的属组时，如果加上-R的参数，那么该目录下的所有文件的属组都会更改。

2、chown：更改文件属主，也可以同时更改文件属组

语法：
```shell
chown [–R] 属主名 文件名
chown [-R] 属主名：属组名 文件名
```

进入 /root 目录（~）将install.log的拥有者改为bin这个账号：
```shell
[root@www ~] cd ~
[root@www ~]# chown bin install.log
[root@www ~]# ls -l
-rw-r--r--  1 bin  users 68495 Jun 25 08:53 install.log
```

将install.log的拥有者与群组改回为root：
```shell
[root@www ~]# chown root:root install.log
[root@www ~]# ls -l
-rw-r--r--  1 root root 68495 Jun 25 08:53 install.log
```

3、chmod：更改文件9个属性

Linux文件属性有两种设置方法，一种是数字，一种是符号。

Linux 文件的基本权限就有九个，分别是**owner/group/others(拥有者/组/其他) 三种身份各有自己的 read/write/execute 权限**。

先复习一下刚刚上面提到的数据：文件的权限字符为： `-rwxrwxrwx` ， 这九个权限是三个三个一组的！其中，我们可以使用数字来代表各个权限，各权限的分数对照表如下：

- r:4
- w:2
- x:1

每种身份(owner/group/others)各自的三个权限(r/w/x)分数是需要累加的，例如当权限为： -rwxrwx--- 分数则是：

```shell
owner = rwx = 4+2+1 = 7
group = rwx = 4+2+1 = 7
others= --- = 0+0+0 = 0
```

所以等一下我们设定权限的变更时，该文件的权限数字就是 770。变更权限的指令 chmod 的语法是这样的：
```shell
chmod [-R] xyz 文件或目录
```

选项与参数：

- xyz : 就是刚刚提到的数字类型的权限属性，为 rwx 属性数值的相加。
- -R : 进行递归(recursive)的持续变更，以及连同次目录下的所有文件都会变更

举例来说，如果要将 .bashrc 这个文件所有的权限都设定启用，那么命令如下：
```shell
[root@www ~]# ls -al .bashrc
-rw-r--r--  1 root root 395 Jul  4 11:45 .bashrc
[root@www ~]# chmod 777 .bashrc
[root@www ~]# ls -al .bashrc
-rwxrwxrwx  1 root root 395 Jul  4 11:45 .bashrc
```

那如果要将权限变成 -rwxr-xr-- 呢？那么权限的分数就成为 [4+2+1][4+0+1][4+0+0]=754。

**符号类型改变文件权限**

还有一个改变权限的方法，从之前的介绍中我们可以发现，基本上就九个权限分别是：

- user：用户
- group：组
- others：其他

那么我们就可以使用 u, g, o 来代表三种身份的权限。

此外， a 则代表 all，即全部的身份。读写的权限可以写成 r, w, x，也就是可以使用下表的方式来看：

chmod	

u
g
o
a

+(加入)
-(除去)
=(设定)

r
w
x

文件或目录 

如果我们需要将文件权限设置为 -rwxr-xr-- ，可以使用 `chmod u=rwx,g=rx,o=r` 文件名 来设定:
```shell
#  touch test1    // 创建 test1 文件
# ls -al test1    // 查看 test1 默认权限
-rw-r--r-- 1 root root 0 Nov 15 10:32 test1
# chmod u=rwx,g=rx,o=r  test1    // 修改 test1 权限
# ls -al test1
-rwxr-xr-- 1 root root 0 Nov 15 10:32 test1
```

而如果是要将权限去掉而不改变其他已存在的权限呢？例如要拿掉全部人的可执行权限，则：

```shell
#  chmod  a-x test1
# ls -al test1
-rw-r--r-- 1 root root 0 Nov 15 10:32 test1
```

更多参考内容
- [Linux chgrp 命令](https://www.runoob.com/linux/linux-comm-chgrp.html)
- [Linux chown 命令](https://www.runoob.com/linux/linux-comm-chown.html)
- [Linux chmod 命令](https://www.runoob.com/linux/linux-comm-chmod.html)


## Linux 文件与目录管理

我们知道Linux的目录结构为树状结构，最顶级的目录为根目录 /。

其他目录通过挂载可以将它们添加到树中，通过解除挂载可以移除它们。

在开始本教程前我们需要先知道什么是绝对路径与相对路径。

- **绝对路径：**
路径的写法，由根目录 / 写起，例如： /usr/share/doc 这个目录。

- **相对路径：**
路径的写法，不是由 / 写起，例如由 /usr/share/doc 要到 /usr/share/man 底下时，可以写成： cd ../man 这就是相对路径的写法。

**处理目录的常用命令**

接下来我们就来看几个常见的处理目录的命令吧：

- ls（英文全拼：list files）: 列出目录及文件名
- cd（英文全拼：change directory）：切换目录
- pwd（英文全拼：print work directory）：显示目前的目录
- mkdir（英文全拼：make directory）：创建一个新的目录
- rmdir（英文全拼：remove directory）：删除一个**空的目录**
- cp（英文全拼：copy file）: 复制文件或目录
- rm（英文全拼：remove）: 删除文件或目录
- mv（英文全拼：move file）: 移动文件与目录，或修改文件与目录的名称

你可以使用 man [命令] 来查看各个命令的使用文档，如 ：man cp。

**ls (列出目录)**
在Linux系统当中， ls 命令可能是最常被运行的。

语法：
```shell
[root@www ~]# ls [-aAdfFhilnrRSt] 目录名称
[root@www ~]# ls [--color={never,auto,always}] 目录名称
[root@www ~]# ls [--full-time] 目录名称
```

选项与参数：
- -a ：全部的文件，连同隐藏文件( 开头为 . 的文件) 一起列出来(常用)
- -d ：仅列出目录本身，而不是列出目录内的文件数据(常用)
- -l ：长数据串列出，包含文件的属性与权限等等数据；(常用)

将家目录下的所有文件列出来(含属性与隐藏档)
```shell
yuancf1024@LAPTOP-22O3I9E3:/$ ls -al
total 404
drwxr-xr-x  19 root root   4096 Mar  4 10:50 .
drwxr-xr-x  19 root root   4096 Mar  4 10:50 ..
lrwxrwxrwx   1 root root      7 Aug 20  2021 bin -> usr/bin
drwxr-xr-x   2 root root   4096 Aug 20  2021 boot
drwxr-xr-x   8 root root   2720 Mar  4 10:50 dev
drwxr-xr-x 102 root root   4096 Mar  4 11:14 etc
drwxr-xr-x   3 root root   4096 Feb 23 17:11 home
-rwxr-xr-x   2 root root 636192 Jan 24 21:19 init
lrwxrwxrwx   1 root root      7 Aug 20  2021 lib -> usr/lib
lrwxrwxrwx   1 root root      9 Aug 20  2021 lib32 -> usr/lib32
lrwxrwxrwx   1 root root      9 Aug 20  2021 lib64 -> usr/lib64
lrwxrwxrwx   1 root root     10 Aug 20  2021 libx32 -> usr/libx32
drwx------   2 root root  16384 Apr 11  2019 lost+found
drwxr-xr-x   2 root root   4096 Aug 20  2021 media
drwxr-xr-x   5 root root   4096 Feb 23 10:12 mnt
drwxr-xr-x   3 root root   4096 Mar  4 10:02 opt
dr-xr-xr-x 239 root root      0 Mar  4 10:50 proc
drwx------   2 root root   4096 Mar  4 10:39 root
drwxr-xr-x  11 root root    300 Mar  4 10:53 run
lrwxrwxrwx   1 root root      8 Aug 20  2021 sbin -> usr/sbin
drwxr-xr-x   6 root root   4096 Aug 20  2021 snap
drwxr-xr-x   2 root root   4096 Aug 20  2021 srv
dr-xr-xr-x  11 root root      0 Mar  4 10:50 sys
drwxrwxrwt  22 root root   4096 Mar  4 14:35 tmp
drwxr-xr-x  14 root root   4096 Feb 22 22:58 usr
drwxr-xr-x  13 root root   4096 Aug 20  2021 var
```

**cd (切换目录)**
cd是Change Directory的缩写，这是用来变换工作目录的命令。

语法：
```shell
cd [相对路径或绝对路径]

#使用 mkdir 命令创建 runoob 目录
[root@www ~]# mkdir runoob

#使用绝对路径切换到 runoob 目录
[root@www ~]# cd /root/runoob/

#使用相对路径切换到 runoob 目录
[root@www ~]# cd ./runoob/

# 表示回到自己的家目录，亦即是 /root 这个目录
[root@www runoob]# cd ~

# 表示去到目前的上一级目录，亦即是 /root 的上一级目录的意思；
[root@www ~]# cd ..
```

接下来大家多操作几次应该就可以很好的理解 cd 命令的。

**pwd (显示目前所在的目录)**

pwd 是 Print Working Directory 的缩写，也就是显示目前所在目录的命令。
```shell
[root@www ~]# pwd [-P]
```

选项与参数：
- -P ：显示出确实的路径，而非使用连结 (link) 路径。

实例：单纯显示出目前的工作目录：

```shell
[root@www ~]# pwd
/root   <== 显示出目录啦～
```

实例显示出实际的工作目录，而非连结档本身的目录名而已。

```shell
[root@www ~]# cd /var/mail   <==注意，/var/mail是一个连结档
[root@www mail]# pwd
/var/mail         <==列出目前的工作目录
[root@www mail]# pwd -P
/var/spool/mail   <==怎么回事？有没有加 -P 差很多～
[root@www mail]# ls -ld /var/mail
lrwxrwxrwx 1 root root 10 Sep  4 17:54 /var/mail -> spool/mail
# 看到这里应该知道为啥了吧？因为 /var/mail 是连结档，连结到 /var/spool/mail 
# 所以，加上 pwd -P 的选项后，会不以连结档的数据显示，而是显示正确的完整路径啊！
```

**mkdir (创建新目录)**

如果想要创建新的目录的话，那么就使用mkdir (make directory)吧。

语法：
```shell
mkdir [-mp] 目录名称
```

选项与参数：

- -m ：配置文件的权限喔！直接配置，不需要看默认权限 (umask) 的脸色～
- -p ：帮助你直接将所需要的目录(包含上一级目录)递归创建起来！
实例：请到/tmp底下尝试创建数个新目录看看：
```shell
[root@www ~]# cd /tmp
[root@www tmp]# mkdir test    <==创建一名为 test 的新目录
[root@www tmp]# mkdir test1/test2/test3/test4
mkdir: cannot create directory `test1/test2/test3/test4': 
No such file or directory       <== 没办法直接创建此目录啊！
[root@www tmp]# mkdir -p test1/test2/test3/test4
加了这个 -p 的选项，可以自行帮你创建多层目录！
```

实例：创建权限为 rwx--x--x 的目录。
```shell
[root@www tmp]# mkdir -m 711 test2
[root@www tmp]# ls -l
drwxr-xr-x  3 root  root 4096 Jul 18 12:50 test
drwxr-xr-x  3 root  root 4096 Jul 18 12:53 test1
drwx--x--x  2 root  root 4096 Jul 18 12:54 test2
```

**rmdir (删除空的目录)**

语法：
rmdir [-p] 目录名称
选项与参数：

-p ：从该目录起，一次删除多级空目录
删除 runoob 目录

```shell
[root@www tmp]# rmdir runoob/
```

将 mkdir 实例中创建的目录(/tmp 底下)删除掉！

```shell
[root@www tmp]# ls -l   <==看看有多少目录存在？
drwxr-xr-x  3 root  root 4096 Jul 18 12:50 test
drwxr-xr-x  3 root  root 4096 Jul 18 12:53 test1
drwx--x--x  2 root  root 4096 Jul 18 12:54 test2
[root@www tmp]# rmdir test   <==可直接删除掉，没问题
[root@www tmp]# rmdir test1  <==因为尚有内容，所以无法删除！
rmdir: `test1': Directory not empty
[root@www tmp]# rmdir -p test1/test2/test3/test4
[root@www tmp]# ls -l        <==您看看，底下的输出中test与test1不见了！
drwx--x--x  2 root  root 4096 Jul 18 12:54 test2
```

利用 -p 这个选项，立刻就可以将 test1/test2/test3/test4 一次删除。

不过要注意的是，这个 rmdir 仅能删除空的目录，你可以使用 rm 命令来删除非空目录。

**cp (复制文件或目录)**

cp 即拷贝文件和目录。

语法:

```shell
[root@www ~]# cp [-adfilprsu] 来源档(source) 目标档(destination)
[root@www ~]# cp [options] source1 source2 source3 .... directory
```

选项与参数：

- -a：相当於 -pdr 的意思，至於 pdr 请参考下列说明；(常用)

- -d：若来源档为连结档的属性(link file)，则复制连结档属性而非文件本身；

- -f：为强制(force)的意思，若目标文件已经存在且无法开启，则移除后再尝试一次；

- -i：若目标档(destination)已经存在时，在覆盖时会先询问动作的进行(常用)

- -l：进行硬式连结(hard link)的连结档创建，而非复制文件本身；

- -p：连同文件的属性一起复制过去，而非使用默认属性(备份常用)；

- -r：递归持续复制，用於目录的复制行为；(常用)

- -s：复制成为符号连结档 (symbolic link)，亦即『捷径』文件；

- -u：若 destination 比 source 旧才升级 destination ！

用 root 身份，将 root 目录下的 .bashrc 复制到 /tmp 下，并命名为 bashrc

```shell
[root@www ~]# cp ~/.bashrc /tmp/bashrc
[root@www ~]# cp -i ~/.bashrc /tmp/bashrc
cp: overwrite `/tmp/bashrc'? n  <==n不覆盖，y为覆盖
```

**rm (移除文件或目录)**
语法：
rm [-fir] 文件或目录

选项与参数：

- -f ：就是 force 的意思，忽略不存在的文件，不会出现警告信息；
- -i ：互动模式，在删除前会询问使用者是否动作
- -r ：递归删除啊！最常用在目录的删除了！这是非常危险的选项！！！

将刚刚在 cp 的实例中创建的 bashrc 删除掉！

[root@www tmp]# rm -i bashrc
rm: remove regular file `bashrc'? y

如果加上 -i 的选项就会主动询问喔，避免你删除到错误的档名！

**mv (移动文件与目录，或修改名称)**

语法：

[root@www ~]# mv [-fiu] source destination
[root@www ~]# mv [options] source1 source2 source3 .... directory

选项与参数：

- -f ：force 强制的意思，如果目标文件已经存在，不会询问而直接覆盖；
- -i ：若目标文件 (destination) 已经存在时，就会询问是否覆盖！
- -u ：若目标文件已经存在，且 source 比较新，才会升级 (update)

复制一文件，创建一目录，将文件移动到目录中
```shell
[root@www ~]# cd /tmp
[root@www tmp]# cp ~/.bashrc bashrc
[root@www tmp]# mkdir mvtest
[root@www tmp]# mv bashrc mvtest
```

将某个文件移动到某个目录去，就是这样做！

将刚刚的目录名称更名为 mvtest2

[root@www tmp]# mv mvtest mvtest2


**Linux 文件内容查看**

Linux系统中使用以下命令来查看文件的内容：

- cat  由第一行开始显示文件内容
- tac  从最后一行开始显示，可以看出 tac 是 cat 的倒着写！
- nl   显示的时候，顺道输出行号！
- more 一页一页的显示文件内容
- less 与 more 类似，但是比 more 更好的是，他可以往前翻页！
- head 只看头几行
- tail 只看尾巴几行

你可以使用 man [命令]来查看各个命令的使用文档，如 ：man cp。

**cat**

由第一行开始显示文件内容

语法：
cat [-AbEnTv]

选项与参数：

- -A ：相当於 -vET 的整合选项，可列出一些特殊字符而不是空白而已；
- -b ：列出行号，仅针对非空白行做行号显示，空白行不标行号！
- -E ：将结尾的断行字节 $ 显示出来；
- -n ：列印出行号，连同空白行也会有行号，与 -b 的选项不同；
- -T ：将 [tab] 按键以 ^I 显示出来；
- -v ：列出一些看不出来的特殊字符

检看 /etc/issue 这个文件的内容：

[root@www ~]# cat /etc/issue
CentOS release 6.4 (Final)
Kernel \r on an \m

**tac**

tac与cat命令刚好相反，文件内容从最后一行开始显示，可以看出 tac 是 cat 的倒着写！如：

[root@www ~]# tac /etc/issue

Kernel \r on an \m
CentOS release 6.4 (Final)

**nl**
显示行号

语法：

nl [-bnw] 文件
选项与参数：

- -b ：指定行号指定的方式，主要有两种：
    -b a ：表示不论是否为空行，也同样列出行号(类似 cat -n)；
    -b t ：如果有空行，空的那一行不要列出行号(默认值)；
- -n ：列出行号表示的方法，主要有三种：
    -n ln ：行号在荧幕的最左方显示；
    -n rn ：行号在自己栏位的最右方显示，且不加 0 ；
    -n rz ：行号在自己栏位的最右方显示，且加 0 ；
- -w ：行号栏位的占用的位数。

实例一：用 nl 列出 /etc/issue 的内容

[root@www ~]# nl /etc/issue
     1  CentOS release 6.4 (Final)
     2  Kernel \r on an \m

**more**
一页一页翻动

```shell
[root@www ~]# more /etc/man_db.config 
#
# Generated automatically from man.conf.in by the
# configure script.
#
# man.conf from man-1.6d
....(中间省略)....
--More--(28%)  <== 重点在这一行喔！你的光标也会在这里等待你的命令
```

在 more 这个程序的运行过程中，你有几个按键可以按的：

- 空白键 (space)：代表向下翻一页；
- Enter         ：代表向下翻『一行』；
- /字串         ：代表在这个显示的内容当中，向下搜寻『字串』这个关键字；
- :f            ：立刻显示出档名以及目前显示的行数；
- q             ：代表立刻离开 more ，不再显示该文件内容。
- b 或 [ctrl]-b ：代表往回翻页，不过这动作只对文件有用，对管线无用。

**less**

一页一页翻动，以下实例输出/etc/man.config文件的内容：
```shell
[root@www ~]# less /etc/man.config
#
# Generated automatically from man.conf.in by the
# configure script.
#
# man.conf from man-1.6d
....(中间省略)....
:   <== 这里可以等待你输入命令！
```

less运行时可以输入的命令有：

- 空白键    ：向下翻动一页；
- [pagedown]：向下翻动一页；
- [pageup]  ：向上翻动一页；
- /字串     ：向下搜寻『字串』的功能；
- ?字串     ：向上搜寻『字串』的功能；
- n         ：重复前一个搜寻 (与 / 或 ? 有关！)
- N         ：反向的重复前一个搜寻 (与 / 或 ? 有关！)
- q         ：离开 less 这个程序；

**head**

取出文件前面几行

语法：

head [-n number] 文件 
选项与参数：

-n ：后面接数字，代表显示几行的意思
[root@www ~]# head /etc/man.config
默认的情况中，显示前面 10 行！若要显示前 20 行，就得要这样：

[root@www ~]# head -n 20 /etc/man.config
tail
取出文件后面几行

语法：

tail [-n number] 文件 
选项与参数：

- -n ：后面接数字，代表显示几行的意思
- -f ：表示持续侦测后面所接的档名，要等到按下[ctrl]-c才会结束tail的侦测

```shell
[root@www ~]# tail /etc/man.config
# 默认的情况中，显示最后的十行！若要显示最后的 20 行，就得要这样：
[root@www ~]# tail -n 20 /etc/man.config
```


**1.Linux 链接概念**

Linux 链接分两种，一种被称为硬链接（Hard Link），另一种被称为符号链接（Symbolic Link）。默认情况下，ln 命令产生硬链接。

**硬连接**

硬连接指通过索引节点来进行连接。在 Linux 的文件系统中，保存在磁盘分区中的文件不管是什么类型都给它分配一个编号，称为索引节点号(Inode Index)。在 Linux 中，多个文件名指向同一索引节点是存在的。比如：A 是 B 的硬链接（A 和 B 都是文件名），则 A 的目录项中的 inode 节点号与 B 的目录项中的 inode 节点号相同，即一个 inode 节点对应两个不同的文件名，两个文件名指向同一个文件，A 和 B 对文件系统来说是完全平等的。删除其中任何一个都不会影响另外一个的访问。

**硬连接的作用是允许一个文件拥有多个有效路径名，这样用户就可以建立硬连接到重要文件，以防止“误删”的功能。**其原因如上所述，因为对应该目录的索引节点有一个以上的连接。只删除一个连接并不影响索引节点本身和其它的连接，只有当最后一个连接被删除后，文件的数据块及目录的连接才会被释放。也就是说，**文件真正删除的条件是与之相关的所有硬连接文件均被删除。**

**软连接**

另外一种连接称之为符号连接（Symbolic Link），也叫软连接。**软链接文件有类似于 Windows 的快捷方式。它实际上是一个特殊的文件**。在符号连接中，文件实际上是一个文本文件，其中包含的有另一文件的位置信息。比如：A 是 B 的软链接（A 和 B 都是文件名），A 的目录项中的 inode 节点号与 B 的目录项中的 inode 节点号不相同，A 和 B 指向的是两个不同的 inode，继而指向两块不同的数据块。但是 A 的数据块中存放的只是 B 的路径名（可以根据这个找到 B 的目录项）。A 和 B 之间是“主从”关系，如果 B 被删除了，A 仍然存在（因为两个是不同的文件），但指向的是一个无效的链接。

2.通过实验加深理解
[oracle@Linux]$ touch f1          #创建一个测试文件f1
[oracle@Linux]$ ln f1 f2          #创建f1的一个硬连接文件f2
[oracle@Linux]$ ln -s f1 f3       #创建f1的一个符号连接文件f3
[oracle@Linux]$ ls -li            # -i参数显示文件的inode节点信息
total 0
9797648 -rw-r--r--  2 oracle oinstall 0 Apr 21 08:11 f1
9797648 -rw-r--r--  2 oracle oinstall 0 Apr 21 08:11 f2
9797649 lrwxrwxrwx  1 oracle oinstall 2 Apr 21 08:11 f3 -> f1

从上面的结果中可以看出，硬连接文件 f2 与原文件 f1 的 inode 节点相同，均为 9797648，然而符号连接文件的 inode 节点不同。

[oracle@Linux]$ echo "I am f1 file" >>f1
[oracle@Linux]$ cat f1
I am f1 file
[oracle@Linux]$ cat f2
I am f1 file
[oracle@Linux]$ cat f3
I am f1 file
[oracle@Linux]$ rm -f f1
[oracle@Linux]$ cat f2
I am f1 file
[oracle@Linux]$ cat f3
cat: f3: No such file or directory

通过上面的测试可以看出：当删除原始文件 f1 后，硬连接 f2 不受影响，但是符号连接 f3 文件无效

3.总结
依此您可以做一些相关的测试，可以得到以下全部结论：

 1).删除符号连接f3,对f1,f2无影响；
 2).删除硬连接f2，对f1,f3也无影响；
 3).删除原文件f1，对硬连接f2没有影响，导致符号连接f3失效；
 4).同时删除原文件f1,硬连接f2，整个文件会真正的被删除。

4年前 (2018-07-04)

## Linux 用户和用户组管理

TODO

## Linux 磁盘管理

TODO

## Linux vi/vim

TODO

## Linux apt 命令

apt（Advanced Packaging Tool）是一个在 Debian 和 Ubuntu 中的 Shell 前端软件包管理器。

apt 命令提供了查找、安装、升级、删除某一个、一组甚至全部软件包的命令，而且命令简洁而又好记。

apt 命令执行需要超级管理员权限(root)。

**apt 语法**

  apt [options] [command] [package ...]


- options：可选，选项包括 -h（帮助），-y（当安装过程提示选择全部为"yes"），-q（不显示安装的过程）等等。
- command：要进行的操作。
- package：安装的包名。

**apt 常用命令**

- 列出所有可更新的软件清单命令：sudo apt update

- 升级软件包：sudo apt upgrade

- 列出可更新的软件包及版本信息：apt list --upgradeable

- 升级软件包，升级前先删除需要更新软件包：sudo apt full-upgrade

- 安装指定的软件命令：sudo apt install <package_name>

- 安装多个软件包：sudo apt install <package_1> <package_2> <package_3>

- 更新指定的软件命令：sudo apt update <package_name>

- 显示软件包具体信息,例如：版本号，安装大小，依赖关系等等：sudo apt show <package_name>

- 删除软件包命令：sudo apt remove <package_name>

- 清理不再使用的依赖和库文件: sudo apt autoremove

- 移除软件包及配置文件: sudo apt purge <package_name>

- 查找软件包命令： sudo apt search <keyword>

- 列出所有已安装的包：apt list --installed

- 列出所有已安装的包的版本信息：apt list --all-versions

**实例**

查看一些可更新的包：

sudo apt update

# Shell

## Shell教程

Shell 是一个用 C 语言编写的程序，它是用户使用 Linux 的桥梁。Shell 既是一种命令语言，又是一种程序设计语言。

Shell 是指一种应用程序，这个应用程序提供了一个界面，用户通过这个界面访问操作系统内核的服务。

Ken Thompson 的 sh 是第一种 Unix Shell，Windows Explorer 是一个典型的图形界面 Shell。

**Shell 脚本**

Shell 脚本（shell script），是一种为 shell 编写的脚本程序。

业界所说的 shell 通常都是指 **shell 脚本**，但读者朋友要知道，shell 和 shell script 是两个不同的概念。

由于习惯的原因，简洁起见，本文出现的 **"shell编程" 都是指 shell 脚本编程，不是指开发 shell 自身**。

**Shell 环境**

Shell 编程跟 JavaScript、php 编程一样，只要有一个能编写代码的文本编辑器和一个能解释执行的脚本解释器就可以了。

Linux 的 Shell 种类众多，常见的有：

- Bourne Shell（/usr/bin/sh或/bin/sh）
- Bourne Again Shell（/bin/bash）
- C Shell（/usr/bin/csh）
- K Shell（/usr/bin/ksh）
- Shell for Root（/sbin/sh）
- ……

本教程关注的是 Bash，也就是 Bourne Again Shell，由于易用和免费，Bash 在日常工作中被广泛使用。同时，Bash 也是大多数Linux 系统默认的 Shell。

在一般情况下，人们并不区分 Bourne Shell 和 Bourne Again Shell，所以，像 #!/bin/sh，它同样也可以改为 #!/bin/bash。

**#! 告诉系统其后路径所指定的程序即是解释此脚本文件的 Shell 程序。**

**第一个shell脚本**

打开文本编辑器(可以使用 vi/vim 命令来创建文件)，新建一个文件 test.sh，扩展名为 sh（sh代表shell），扩展名并不影响脚本执行，见名知意就好，如果你用 php 写 shell 脚本，扩展名就用 php 好了。

输入一些代码，第一行一般是这样：

实例

```shell
#!/bin/bash
echo "Hello World !"
```

#! 是一个约定的标记，它告诉系统这个脚本需要什么解释器来执行，即使用哪一种 Shell。

echo 命令用于向窗口输出文本。

**运行 Shell 脚本有两种方法：**

*1、作为可执行程序*

将上面的代码保存为 test.sh，并 cd 到相应目录：

```shell
chmod +x ./test.sh  #使脚本具有执行权限
./test.sh  #执行脚本
```

注意，一定要写成 ./test.sh，而不是 test.sh，运行其它二进制的程序也一样，直接写 test.sh，linux 系统会去 PATH 里寻找有没有叫 test.sh 的，而只有 /bin, /sbin, /usr/bin，/usr/sbin 等在 PATH 里，你的当前目录通常不在 PATH 里，所以写成 test.sh 是会找不到命令的，**要用 ./test.sh 告诉系统说，就在当前目录找。**

*2、作为解释器参数*

这种运行方式是，直接运行解释器，其参数就是 shell 脚本的文件名，如：

```shell
/bin/sh test.sh
/bin/php test.php
```

这种方式运行的脚本，不需要在第一行指定解释器信息，写了也没用。

## Shell 变量

定义变量时，变量名不加美元符号（$，PHP语言中变量需要），如：

`your_name="runoob.com"`

> **注意，变量名和等号之间不能有空**格，这可能和你熟悉的所有编程语言都不一样。同时，变量名的命名须遵循如下规则：

- 命名只能使用英文字母，数字和下划线，首个字符不能以数字开头。
- 中间不能有空格，可以使用下划线 _。
- 不能使用标点符号。
- 不能使用bash里的关键字（可用help命令查看保留关键字）。
- 有效的 Shell 变量名示例如下：

```shell
RUNOOB
LD_LIBRARY_PATH
_var
var2
```

无效的变量命名：
```shell
?var=123
user*name=runoob
```

除了显式地直接赋值，还可以用语句给变量赋值，如：
```shell
for file in `ls /etc`
或
for file in $(ls /etc)
```

以上语句将 /etc 下目录的文件名循环出来。

**使用变量**

使用一个定义过的变量，只要在变量名前面加美元符号即可，如：
```shell
your_name="qinjx"
echo $your_name
echo ${your_name}
```

变量名外面的花括号是可选的，加不加都行，**加花括号是为了帮助解释器识别变量的边界**，比如下面这种情况：
```shell
for skill in Ada Coffe Action Java; do
    echo "I am good at ${skill}Script"
done
```

如果不给skill变量加花括号，写成echo "I am good at $skillScript"，解释器就会把$skillScript当成一个变量（其值为空），代码执行结果就不是我们期望的样子了。

**推荐给所有变量加上花括号，这是个好的编程习惯。**

已定义的变量，可以被重新定义，如：
```shell
your_name="tom"
echo $your_name
your_name="alibaba"
echo $your_name
```

这样写是合法的，但注意，第二次赋值的时候不能写$your_name="alibaba"，**使用变量的时候才加美元符（$）**。

**只读变量**

使用 readonly 命令可以将变量定义为只读变量，只读变量的值不能被改变。

下面的例子尝试更改只读变量，结果报错：
```shell
#!/bin/bash
myUrl="https://www.google.com"
readonly myUrl
myUrl="https://www.runoob.com"
```

运行脚本，结果如下：
```shell
/bin/sh: NAME: This variable is read only.
```

**删除变量**

使用 unset 命令可以删除变量。语法：

`unset variable_name`

变量被删除后不能再次使用。unset 命令不能删除只读变量。

实例
```shell
#!/bin/sh
myUrl="https://www.runoob.com"
unset myUrl
echo $myUrl
```

以上实例执行将没有任何输出。

**变量类型**

运行shell时，会同时存在三种变量：

- 1) **局部变量** 局部变量在脚本或命令中定义，仅在当前shell实例中有效，其他shell启动的程序不能访问局部变量。
- 2) **环境变量** 所有的程序，包括shell启动的程序，都能访问环境变量，有些程序需要环境变量来保证其正常运行。必要的时候shell脚本也可以定义环境变量。
- 3) **shell变量** shell变量是由shell程序设置的特殊变量。shell变量中有一部分是环境变量，有一部分是局部变量，这些变量保证了shell的正常运行


**Shell 字符串**

字符串是shell编程中最常用最有用的数据类型（除了数字和字符串，也没啥其它类型好用了），**字符串可以用单引号，也可以用双引号，也可以不用引号**。

**单引号**

`str='this is a string'`

单引号字符串的限制：

- 单引号里的任何字符都会原样输出，*单引号字符串中的变量是无效的*；
- 引号字串中不能出现单独一个的单引号（对单引号使用转义符后也不行），但可成对出现，作为字符串拼接使用。

**双引号**
```shell
your_name="runoob"
str="Hello, I know you are \"$your_name\"! \n"
echo -e $str
```
输出结果为：

Hello, I know you are "runoob"! 

双引号的优点：

- 双引号里可以有变量
- 双引号里可以出现转义字符

**拼接字符串**
```shell
your_name="runoob"
# 使用双引号拼接
greeting="hello, "$your_name" !"
greeting_1="hello, ${your_name} !"
echo $greeting  $greeting_1
# 使用单引号拼接
greeting_2='hello, '$your_name' !'
greeting_3='hello, ${your_name} !'
echo $greeting_2  $greeting_3
```

输出结果为：

hello, runoob ! hello, runoob !
hello, runoob ! hello, ${your_name} !


**获取字符串长度**
```shell
string="abcd"
echo ${#string} #输出 4
```

**提取子字符串**

以下实例从字符串第 2 个字符开始截取 4 个字符：
```shell
string="runoob is a great site"
echo ${string:1:4} # 输出 unoo
```

> 注意：第一个字符的索引值为 0。

**查找子字符串**
查找字符 i 或 o 的位置(哪个字母先出现就计算哪个)：
```shell
string="runoob is a great site"
echo `expr index "$string" io`  # 输出 4
```

> 注意： 以上脚本中 ` 是反引号，而不是单引号 '，不要看错了哦。

**Shell 数组**

bash支持一维数组（不支持多维数组），并且没有限定数组的大小。

**类似于 C 语言，数组元素的下标由 0 开始编号。获取数组中的元素要利用下标，下标可以是整数或算术表达式，其值应大于或等于 0。**

**定义数组**

在 Shell 中，用括号来表示数组，数组元素用"空格"符号分割开。定义数组的一般形式为：

`数组名=(值1 值2 ... 值n)`

例如：

`array_name=(value0 value1 value2 value3)`
或者

```shell
array_name=(
value0
value1
value2
value3
)
```
还可以单独定义数组的各个分量：
```shell
array_name[0]=value0
array_name[1]=value1
array_name[n]=valuen
```

可以不使用连续的下标，而且下标的范围没有限制。

**读取数组**

读取数组元素值的一般格式是：

${数组名[下标]}
例如：

`valuen=${array_name[n]}`

使用 @ 符号可以获取数组中的所有元素，例如：

`echo ${array_name[@]}`

**获取数组的长度**

获取数组长度的方法与获取字符串长度的方法相同，例如：
```shell
# 取得数组元素的个数
length=${#array_name[@]}
# 或者
length=${#array_name[*]}
# 取得数组单个元素的长度
lengthn=${#array_name[n]}
```

**Shell 注释**

以 # 开头的行就是注释，会被解释器忽略。

通过每一行加一个 # 号设置多行注释，像这样：
```shell
#--------------------------------------------
# 这是一个注释
# author：菜鸟教程
# site：www.runoob.com
# slogan：学的不仅是技术，更是梦想！
#--------------------------------------------
##### 用户配置区 开始 #####
#
#
# 这里可以添加脚本描述信息
# 
#
##### 用户配置区 结束  #####
```

如果在开发过程中，遇到大段的代码需要临时注释起来，过一会儿又取消注释，怎么办呢？

*每一行加个#符号太费力了，可以把这一段要注释的代码用一对花括号括起来，定义成一个函数*，没有地方调用这个函数，这块代码就不会执行，达到了和注释一样的效果。

**多行注释**

多行注释还可以使用以下格式：
```shell
:<<EOF
注释内容...
注释内容...
注释内容...
EOF
```

EOF 也可以使用其他符号:

```shell
:<<'
注释内容...
注释内容...
注释内容...
'

:<<!
注释内容...
注释内容...
注释内容...
!
```

## Shell 传递参数

我们可以在执行 Shell 脚本时，向脚本传递参数，脚本内获取参数的格式为：$n。n 代表一个数字，1 为执行脚本的第一个参数，2 为执行脚本的第二个参数，以此类推……

**实例**

以下实例我们向脚本传递三个参数，并分别输出，其中 $0 为执行的文件名（包含文件路径）：

实例
```shell
#!/bin/bash
# author:菜鸟教程
# url:www.runoob.com

echo "Shell 传递参数实例！";
echo "执行的文件名：$0";
echo "第一个参数为：$1";
echo "第二个参数为：$2";
echo "第三个参数为：$3";
```
为脚本设置可执行权限，并执行脚本，输出结果如下所示：

```shell
$ chmod +x test.sh 
$ ./test.sh 1 2 3
Shell 传递参数实例！
执行的文件名：./test.sh
第一个参数为：1
第二个参数为：2
第三个参数为：3
```

另外，还有几个特殊字符用来处理参数：

|参数处理|	说明|
|-|-|
|$#|	传递到脚本的参数个数
|$*|	以一个单字符串显示所有向脚本传递的参数。
如"$*"用「"」括起来的情况、以"$1 $2 … $n"的形式输出所有参数。$$	脚本运行的当前进程ID号
|$!|	后台运行的最后一个进程的ID号
|$@|	与$*相同，但是使用时加引号，并在引号中返回每个参数。如"$@"用「"」括起来的情况、以"$1" "$2" … "$n" 的形式输出所有参数。
|$-|	显示Shell使用的当前选项，与set命令功能相同。
|$?|	显示最后命令的退出状态。0表示没有错误，其他任何值表明有错误。

**实例**
```shell
#!/bin/bash
# author:菜鸟教程
# url:www.runoob.com

echo "Shell 传递参数实例！";
echo "第一个参数为：$1";

echo "参数个数为：$#";
echo "传递的参数作为一个字符串显示：$*";
```

执行脚本，输出结果如下所示：
```shell
$ chmod +x test.sh 
$ ./test.sh 1 2 3
Shell 传递参数实例！
第一个参数为：1
参数个数为：3
传递的参数作为一个字符串显示：1 2 3
```

$* 与 $@ 区别：

- 相同点：都是引用所有参数。
- 不同点：只有在双引号中体现出来。假设在脚本运行时写了三个参数 1、2、3，，则 " * " 等价于 "1 2 3"（传递了一个参数），而 "@" 等价于 "1" "2" "3"（传递了三个参数）。

**实例**
```shell
#!/bin/bash
# author:菜鸟教程
# url:www.runoob.com

echo "-- \$* 演示 ---"
for i in "$*"; do
    echo $i
done

echo "-- \$@ 演示 ---"
for i in "$@"; do
    echo $i
done
```

执行脚本，输出结果如下所示：

```shell
$ chmod +x test.sh 
$ ./test.sh 1 2 3
-- $* 演示 ---
1 2 3
-- $@ 演示 ---
1
2
3
```

## Shell数组

TODO：等到需要用到这些知识的时候，马上上手学习也不迟。

## Shell运算符

## Shell echo命令

## Shell printf命令

## Shell test命令

## Shell 流程控制

## Shell 函数

## Shell 输入/输出重定向

## Shell 文件包含

