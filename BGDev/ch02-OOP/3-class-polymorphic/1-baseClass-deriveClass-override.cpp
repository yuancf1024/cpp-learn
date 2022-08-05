#include <iostream>

using namespace std;

class A {
public:
    A() {}
    virtual void foo() { 
        cout << "This is A." << endl;
    }
};

class B : public A {
public:
    B() {}
    void foo() { 
        cout << "This is B." << endl;
     }
};

int main() { 
    A a;
    a.foo();
    B b;
    b.foo();
    return 0;
}

/**
 * @brief 基类和派生类成员函数同名覆盖时的执行选择
 * 声明了两个类（类A和类B），注意类A中的foo函数和类B中的foo函数
 * 不是重载函数，它们不仅函数名相同，而且函数类型和参数个数都相同，
 * 但两个同名函数不在同一个类中，而是分别在基类和派生类中，属于同名覆盖。
 * 若是重载函数，二者的参数个数和参数类型必须至少有一者不同，
 * 否则系统无法确定调用哪一个函数。
 * 而此处定义了一个A类的对象a和B类的对象b，有所区别，
 * 所以会分别执行各个类的foo函数。
This is A.
This is B.
 */