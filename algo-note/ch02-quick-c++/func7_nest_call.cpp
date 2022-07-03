#include <cstdio>

int max_2(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int max_3(int a, int b, int c) { 
    int temp = max_2(a, b);
    temp = max_2(temp, c);
    return temp;
}

int main() { 
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d\n", max_3(a, b, c));
    return 0;
}