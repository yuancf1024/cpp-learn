#include <iostream>

using namespace std;

class CBox {
public:
    CBox(){};
    virtual ~CBox(){};
};

int main() { 
    CBox boxobj;
    cout << sizeof(boxobj) << endl; 

    return 0;
}

/**
 * @brief 类中有虚的析构函数的空间计算
 * 类CBox中有1个构造函数和1个虚的析构函数，程序的执行结果是8。
 * 事实上，编译器为了支持虚函数，会产生额外的负担，
 * 这正是指向虚函数表的指针的大小。（指针变量在64位的机器上占8Byte。）
 * 
 * 如果一个类中有一个或者多个虚函数，没有成员变量，
 * 那么类相当于含有一个指向虚函数表的指针，占8Byte。
8
 */