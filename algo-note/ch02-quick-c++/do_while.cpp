#include <cstdio>

int main() { 
    int n = 1, sum = 0; 
    do {
        sum += n;
        n++;
    } while (n <= 100);
    printf("sum = %d\n", sum);
    return 0;
}