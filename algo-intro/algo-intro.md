# 算法竞赛入门经典学习笔记

[toc]

# update
- [ ] 2022-04-25 init文档
- [ ] 

# key notes

# 附录A

## A.1 命令行

**文件系统**

`pwd`: 打印当前路径
`tab`键的使用：快速补全命令
**绝对路径**：给出"起点"，指向不随当前路径发生变化
**相对路径**：
`.`: 代表当前目录
`..`: 代表父目录

> Linux中的路径分隔符：正斜线 `/`

**进程**

一个程序正在执行的实体。它消耗CPU资源且占用内存。进程编号`PID`

Linux 
- `top`：查看当前占用CPU资源最多的一些进程
- `ps`: 使用列表的方式给出当前进程 (添加`ax` 列出更多进程)
- `kill <进程名>`: 终止进程

**程序的执行**

```shell
# 编译c程序
gcc -o hello hello.c

# 运行可执行文件
./hello
```

**重定向和管道**

使用重定向的技巧将输入文件塞到程序的标准输入中，然后再将程序输出保存在文件中。

Linux `./abc < abc.in > abc.out`

> 细微调整
> - `>` 默认覆盖
> - `>>` 输出附加到文件末尾
> - `cat abc.txt | more` 分页显示一个文本文件的内容

**常见命令**

Linux

- `time` : `time ./abc` 执行abc并输出运行时间。
- `ls`: 文件列表
- `cd/mkdir/rmdir`: 改变/创建/删除目录
- `cat/more`: 显示文件内容
- `diff`：比较文件内容
- `chmod`：修改文件属性
- `cp`：复制文件
- `rm`：删除文件
- `mv`：文件改名
- `echo`：回显
- `exit`：关闭命令行
- `grep`：在文件中查找字符串
- `set`：查看/修改环境变量
- `man <命令>`：帮助

## A.2 OS脚本编程入门

**Linux下的Bash脚本**
```shell
#!/bin/bash
while true; do 
    ./r > input # 生成随机数据
    ./a < input > output.a 
    ./b < input > output.b
    diff output.a output.b # 文件比较
    if [ $? -ne 0 ] ; then break; fi # 判断返回值
done
```

把上述程序保存成`test.sh`,再执行`chmod +x test.sh`,即可使用`./test.sh`来执行。
> 上述程序的解释：
> while if判断的是命令集中最后一条语句的返回码(exit code), `true`的作用是直接返回0；
> `[]` 计算表达式
> `$` 是bash内部变量，表示"上一个程序的返回码"

Bash while&if脚本的用法：
- `while <命令集>; do <命令集>; done`
- `if <命令集>; do <命令集>;`

**解决随机数重复的问题**
`time(NULL)` 函数每隔一秒才能产生一个不同的随机数据。

- **使用系统自带的随机数发生器**：`$RANDOM` 默认范围`0~32767`
- **直接用脚本编写随机数生成器，把它们传递到程序中**

## A.3 编译器和调试器

**常见编译选项**

```c
#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int c = a + b;
    printf("%d\n", c);
    return 0;
}
```

编译：`gcc -o test test.c`
运行：`./test`

添加编译选项，可显示编译警告：`gcc -o test test.c -Wall`

- `-lm`: 让编译器连接数学库。
- `-DDEBUG`: 在编译时定义符号`DEBUG`(可换成其他，如`-DLOCAL`将定义符号 `LOCAL`). 会使位于`#ifdef DEBUG` 和 `#endif` 中间的语句被编译。
- `-O1、-O2、-O3`: 对代码进行速度优化

**gdb调试+常见命令**

|简写|全称|备注|
|-|-|-|
l | list | 显示指定行号或者指定函数附近的源代码
b | break | 在指定行号或者指定函数开头处设置断点。如 b main
r | run | 运行程序，直到程序结束或者遇到断点而停下
c | continue | 在程序中断后继续执行程序，直到程序结束或者遇到断点而停下。注意在程序开始前只能用r，不能用c
n | next | 执行一条语句。如果有函数调用，则把它作为一个整体
s | step | 执行一条语句。如果有函数调用，则进入函数内部
u | until | 执行到指定行号或者指定函数的开头
p | print | 显示变量或者表达式的值
disp | display | 把一个表达式设置为display，当程序每次停下来时都会显示其值
cl | clear | 取消断点，和 b的格式相同。如果该位置有多个断点，将同时取消
i | info | 显示各种信息。如 i b显示所有断点，i disp显示display，而i lo显示所有局部变量
