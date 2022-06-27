#include "apue.h"
#include <dirent.h>

/*
列出一个目录中所有文件的名字
*/

int main(int argc, char *argv[]) { 
    DIR *dp;
    struct dirent *dirp;

    if (argc != 2)
        err_quit("usage: ls directory_name");

    if ((dp = opendir(argv[1])) == NULL)
        err_sys("can't open %s", argv[1]);

    while ((dirp = readdir(dp)) != NULL) {
        printf("%s\n", dirp->d_name);
    }

    closedir(dp);
    exit(0);
}

/*
运行注意：
为了运行APUE中的代码，有两种方法
1. 直接在shell命令中指明apue.h 和 error.c(标准出错例程)文件
将apue.h和error.c放在和运行程序相同的目录下，
编译时特别指定error.c

2. 将error.c 编译成动态库
参考csapp中 /home/yuancf1024/cs/cpp-learn/csapp/ch8-control-flow/fork.c中的做法

此处采用方法1

gcc -o myls myls.c error.c
./myls /home # 后面的命令行参数可选

*/