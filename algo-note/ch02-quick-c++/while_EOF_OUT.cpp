#include <cstdio>

int main() {
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF) {
        printf("%d\n", a + b);
        printf("\n"); // 每组数据输出之后都额外添加一个空行
    }
    return 0;
}