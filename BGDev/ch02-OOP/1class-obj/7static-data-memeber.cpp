#include <iostream>

using namespace std;

/*
静态的数据成员基类和派生类对象共享
*/

class Base {
public:
    static int var;
};
int Base::var = 10;
class Derived:public Base{
};

int main() { Base base1;
    base1.var++; // 通过对象名引用
    cout << base1.var << endl; // 输出11
    Base base2;
    base2.var++;
    cout << base2.var << endl; // 输出12
    Derived derived1;
    derived1.var++;
    cout << derived1.var << endl; // 输出13
    Base::var++; // 通过类名引用
    cout << derived1.var << endl; // 输出14
    return 0;
}

/**
 * @brief 
 * 在基类Base中定义了一个静态数据成员var，类Derived继承了类Base。
 * 无论是通过基类对象，或者是派生类对象，都可以改变静态数据成员var的值。
 * 
 * 如果只声明了类而未定义对象，类的一般数据成员是不占内存空间的，
 * 只有在定义对象时才会为对象的数据成员分配空间。
 * 但是静态数据成员不属于某一个对象，所以在为对象所分配的空间中
 * 不包括静态数据成员所占的空间，静态数据成员是在所有对象之外
 * 单独开辟一段空间来存放。只要在类中定义了静态数据成员，即使不定义对象，
 * 也为静态数据成员分配了空间，它可以被引用。
 * 
 * 在一个类中可以有一个或多个静态数据成员，所有对象都共享这些静态数据成员，
 * 都可以引用它。
 * 
 * 如果在一个函数中定义了静态变量，在函数结束时该静态变量并不被释放，
 * 仍然存在并保留其值。静态数据成员也类似，它不随对象的建立而分配空间，
 * 也不随对象的撤销而释放。静态数据成员是程序在编译时被分配空间，
 * 到程序结束时释放空间。静态数据成员可以通过对象名引用，
 * 也可以通过类名来引用。
 * 
11
12
13
14
 */