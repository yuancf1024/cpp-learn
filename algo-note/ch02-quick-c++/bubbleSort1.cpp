#include <cstdio>

int main() { 
    int a = 1, b = 2;
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}