#include "apue.h"

#define BUFFSIZE 4096

/*
将标准输入复制到标准输出 (不带缓冲的I/O)
*/


int main(void) { 
    int n;
    char buf[BUFFSIZE];

    while ((n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0) {
        if (write(STDOUT_FILENO, buf, n) != n)
            err_sys("write error");
    }

    if (n < 0) {
        err_sys("read error");
    }

    exit(0);
}

/*
gcc -o mycat mycat.c error.c
./mycat > mycat_data # 将终端输入写入到文件 mycat_data
yuancf1024
2022-06-27 22:13
^C

将infile的文件内容复制到outfile
./mycat < infile > outfile


*/