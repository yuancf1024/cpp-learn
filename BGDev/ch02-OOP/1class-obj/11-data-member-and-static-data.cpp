#include <iostream>

using namespace std;

class CBox {
    int length, width, height;
    static int count;
};

int main() { 
    CBox boxobj;
    cout << sizeof(boxobj) << endl; // 输出1

    return 0;
}

/**
 * @brief 有成员变量和静态成员变量的类的存储空间计算
 * 类CBox中有3个普通数据成员和1个静态数据成员，
 * 比例2.14中多了一个静态数据成员，但是程序的执行结果还是12，
 * 也就证明了静态数据成员是不占对象的内存空间的。
12
 */