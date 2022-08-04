#include <iostream>

using namespace std;

class CBox {
    int length, width, height;
};

int main() { 
    CBox boxobj;
    cout << sizeof(boxobj) << endl; // 输出1

    return 0;
}

/**
 * @brief 只有成员变量的类的存储空间计算
 * 类CBox中只有3个成员变量，由于整型变量占4Byte，
 * 所以对象所占的空间就是12Byte。那静态成员变量是否也占存储空间呢？
12
 */