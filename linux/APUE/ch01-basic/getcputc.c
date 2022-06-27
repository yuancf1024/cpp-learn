#include "apue.h"

/*
用标准I/O将标准输入复制到标准输出
*/

int main(void) { 
    int c; 

    while ((c = getc(stdin)) != EOF) {
        if (putc(c, stdout) == EOF) {
            err_sys("output error");
        }
    }

    if (ferror(stdin)) {
        err_sys("input error");
    }
    exit(0);
}

/*
gcc -o getcputc getcputc.c error.c
./getcputc > standardIO
yuancf1024

ctrl+D # 此处如果用ctrl+C 则无法将标准输入写入到指定的输出文件

# 说明ctrl+D 才是文件结束符
*/