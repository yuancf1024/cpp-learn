#include <cstdio>

int main() { 
    int n = 2; 
    if (n > 3) {
        n = 9;
        printf("%d\n", n);
    } else if (n > 2) {
        printf("%d\n", n + 1);
    } else {
        printf("%d\n", n);
    }
    return 0;
}