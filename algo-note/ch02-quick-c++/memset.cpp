#include <cstdio>
#include <cstring>

int main() { 
    int a[5] = {1, 2, 3, 4, 5}; 
    // 赋初值0
    memset(a, 0, sizeof(a));
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    // 赋初值-1
    memset(a, -1, sizeof(a));
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}