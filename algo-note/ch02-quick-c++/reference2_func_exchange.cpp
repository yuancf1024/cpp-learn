# include <cstdio>

// void swap(int* a, int* b) { 
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// 错误示范
void swap(int* &a, int* &b) { 
    int* temp = a;
    a = b;
    b = temp;
}

int main() { 
    int a = 1, b = 2;
    int *p1 = &a, *p2 = &b;
    swap(p1, p2);
    printf("a = %d, b = %d\n", *p1, *p2); // 起不到交换功能
    return 0;
}