#include <cstdio>

int main() { 
    int i, sum = 0;
    for (i = 1; i <= 100; i++) {
        sum += i;
        if (sum >= 2000)
            break;
    }
    printf("sum = %d\n", sum);
    return 0;
}