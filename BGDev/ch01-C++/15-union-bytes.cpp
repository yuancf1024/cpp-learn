#include <iostream>

using namespace std;

union A {
    int a[5]; // 5*4=20Byte
    char b;
    double c;
};

/**
 * @brief 在共用体内变量的默认内存对齐方式，
 * 必须以最长的double（8Byte）对齐，
 * 也就是说应该是sizeof（A）=24
 */

int main() { 
    cout << sizeof(A) << endl;
    return 0;
}