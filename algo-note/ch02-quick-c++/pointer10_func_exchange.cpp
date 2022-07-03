# include <cstdio>

void swap(int a, int b) { 
    int temp = a;
    a = b;
    b = temp;
}

int main() { int a = 1, b = 2;
    swap(a, b);
    printf("a = %d, b = %d\n", a, b); // 起不到交换功能
    return 0;
}