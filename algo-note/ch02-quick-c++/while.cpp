# include <cstdio>

int main() { 
    int n = 1, sum = 0; 
    while(n <= 100) {
        sum = sum + n;
        n++;
    }
    printf("sum = %d\n", sum);
    return 0;
}