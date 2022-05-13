#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <assert.h>
#include "common.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "usage: cpu <string>\n");
        exit(1);
    }
    char *str = argv[1];
    while (1) {
        Spin(1);
        // 调用 Spin()函数，该函数会反复检查时间甚在运行一秒后返回
        printf("%s\n", str);
        // 打印出用户在命令行中传入的字符串，甚一直重复这样做
    }
    return 0;
}
// PS D:\Code\code_C\C_Single\textbook\OS_intro\ch02-intro> gcc -o cpu cpu.c -Wall        
// PS D:\Code\code_C\C_Single\textbook\OS_intro\ch02-intro> ./cpu "A"                     
// A
// A

// windows 运行同一个程序的许多不同实例
// ./cpu A -and ./cpu B -and ./cpu C -and ./cpu D
// Linux
// (./cpu A &) && (./cpu B &) && (./cpu C &) && (./cpu D &)