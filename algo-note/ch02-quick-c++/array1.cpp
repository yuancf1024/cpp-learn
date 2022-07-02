#include <cstdio>

int main() { 
    int a[10];
    scanf("%d", &a[0]);
    for (int i = 1; i < 10; i++) {
        a[i] = a[i - 1] * 2;
    }
    for (int i = 0; i < 10; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}