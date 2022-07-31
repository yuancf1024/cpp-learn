#include <iostream>

using namespace std;

/*
成员初始化列表的概念

在类的构造函数中，不在函数体内对成员变量赋值，
而是在构造函数的花括号前面使用冒号和初始化列表赋值

效率

用初始化列表会快一些的原因是，对于类型，它少了一次调用构造函数的过程，
而在函数体中赋值则会多一次调用。而对于内置数据类型则没有差别
*/

class A
{
public:
    A()
    {
        cout << "默认构造函数A()" << endl;
    }
    A(int a)
    {
        value = a;
        cout << "A(int "<<value<<")" << endl;
    }
    A(const A& a)
    {
        value = a.value;
        cout << "拷贝构造函数A(A& a):  "<<value << endl;
    }
    int value;
};

class B
{
public:
    B() : a(1) // 在构造函数体内部初始化的对象b多了一次构造函数的调用过程
    {
        b = A(2);
    }
    A a;
    A b;
};

int main()
{
    B b;
}

//输出结果：
//A(int 1)
//默认构造函数A()
//A(int 2)
