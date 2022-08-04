#include <iostream>

using namespace std;

int main() { 
    int *p;
    int a[10] = {1, 2, 3, 4, 5};

    p = a; // 数组名代表数组第一个元素的地址
    // 等价于 p = &a[0]
    cout << *p << endl;

    cout << "数组指针: "; // 将二维数组赋给一指针
    int b[3][4] = {{1, 2, 3, 4}, {2, 3, 4, 5}};
    int(*p1)[4]; // 该语句是定义一个数组指针,指向包含4个元素的一维数组
    p1 = b; // 将该二维数组的首地址赋给p1,也就是a[0] & a[0][0]
    p1++; // p 跨过b[0][] 指向了行 b[1][]
    // 数组指针也称指向一维数组的指针,亦称行指针
    cout << *p1[0] << endl;

    cout << "指针数组: ";

    // 将二维数组赋给一指针数组
    int *p2[3];
    for (int i = 0; i < 3; i++) {
        p2[i] = b[i];
    }
    // 打印 p2数组
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << *(p2[i] + j) << " ";
        }
        cout << endl;
    }
    return 0;
}