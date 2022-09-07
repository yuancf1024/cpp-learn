#include <stdio.h>

/**
 * @brief 
 * 创建一个square函数，输入volatile类型的整型指针p。
 * 返回p指向值的平方。
 * p的初始值为预制函数fun的输入值n
 */

int square(volatile int* p) { 
    return (*p) * (*p); 
}

int fun(int n) {
    // write code here
    return square(&n);
}

int main() {
    int n = 2;
    int res = fun(n);
    printf("%d\n", res);
    return 0;
}

/*
n=1
1

n=2
4
*/