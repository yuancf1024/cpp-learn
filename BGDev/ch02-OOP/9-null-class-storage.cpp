#include <iostream>

using namespace std;

class CBox {};

int main() { 
    CBox boxobj;
    cout << sizeof(boxobj) << endl; // 输出1

    return 0;
}

/**
 * @brief 空类存储空间的计算
 * 
 * 定义了一个空类CBox，里面既没有数据成员，也没有成员函数。
 * 程序执行结果显示它的大小为1。空类型对象中不包含任何信息，应该大小为0。
 * 但是当声明该类型的对象的时候，它必须在内存中占有一定的空间，
 * 否则无法使用这些对象。
 * 至于占用多少内存，由编译器决定。C++中每个空类型的实例占1Byte空间。
1
 */