#include<stdio.h>

int main(int argc, char *argv[]) {
    printf("argc is %d\n", argc);
    for (int i=0; i < argc; i++) {
        printf("argv[%d] is %s\n", i, argv[i]);
    }
    return 0;
}
// argc和argv[], 通过命令向程序传递参数
// argc 输入的参数数量
// argv[] 保存参数的字符串数组

// $ gcc -o argtest argtest.c
// $ ./argtest
// argc is 1
// argv[0] is ./argtest

// $ ./argtest 1234 abcd
// argc is 3
// argv[0] is ./argtest
// argv[1] is 1234
// argv[2] is abcd