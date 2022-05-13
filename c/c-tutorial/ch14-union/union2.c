#include <stdio.h>

union foo {
    int a;
    float b;
} x;

/*
Union 结构指针与它的属性有关，
当前哪个属性能够取到值，它的指针就是对应的数据类型。
*/

int main() {
    int* foo_int_p = (int *)&x;
    float* foo_float_p = (float *)&x;

    x.a = 12;
    printf("%d\n", x.a); // 12
    printf("%d\n", *foo_int_p); // 12

    x.b = 3.141592;
    printf("%f\n", x.b); // 3.141592
    printf("%f\n", *foo_float_p); // 3.141592
}