#include <cstdio>

// 输入三个整数，输出三个整数中的最大值
int MAX(int a, int b, int c) { 
    int M; 
    if (a >= b && a >= c)
        M = a;
    else if (b >= a && b >= c)
        M = b;
    else
        M = c;
    return M;
}

int main() { 
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d\n", MAX(a, b, c));
    return 0;
}