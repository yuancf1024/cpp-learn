# include <cstdio>

int main() { 
    int n = 12345, count = 0; 
    while(n) { // 相当于 while(n != 0)
        count = count + n % 10;
        n = n / 10;
    }
    printf("sum = %d\n", count);
    return 0;
}