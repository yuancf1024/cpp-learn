#include <cstdio>

int main() { 
    int n = 3, m = 5; 
    if (n < 5) {
        if (m < 5) {
            printf("%d\n", m + n);
        } else {
            printf("%d\n", m - n);
        }
    } else {
        printf("haha\n");
    }
    return 0;
}