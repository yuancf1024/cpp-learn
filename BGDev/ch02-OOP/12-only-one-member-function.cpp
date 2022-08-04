#include <iostream>

using namespace std;

class CBox {
    int foo();
};

int main() { 
    CBox boxobj;
    cout << sizeof(boxobj) << endl; 

    return 0;
}

/**
 * @brief 类中只有1个成员函数的存储空间计算
 * 类CBox中只有一个成员函数，类CBox的对象boxobj的大小却只有1Byte，
 * 和空类对象是一样的，所以可以得出，成员函数是不占空间的。
1
 */