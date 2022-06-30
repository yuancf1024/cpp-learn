#include <cstdio>

int main() { 
    int a = 1, b = 1, n1, n2;
    n1 = a++; // 先使用a，再将a+1
    n2 = ++b; // 先将b+1，再使用b
    printf("%d %d\n", n1, a);
    printf("%d %d\n", n2, b);
    return 0;
}