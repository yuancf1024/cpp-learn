#include <iostream>

using namespace std;

class A {};

class B {};

class C : public A {};

class D : public virtual B {};

class E : public A, public B {};

int main() { A a;
    B b;
    C c;
    D d;
    E e;

    cout << "sizeof(a):" << sizeof(a) << endl;
    cout << "sizeof(b):" << sizeof(b) << endl;
    cout << "sizeof(c):" << sizeof(c) << endl;
    cout << "sizeof(d):" << sizeof(d) << endl;
    cout << "sizeof(e):" << sizeof(e) << endl;
    return 0;
}

/**
 * @brief 继承空类和多重继承空类存储空间的计算
 * 定义了一个空类A和B，类C继承了类A，类D继承了虚基类B，类E继承了类A和类B。
 * 这些类的对象所占的空间都是1Byte。由此可见，单一继承的空类空间也是1，
 * 多重继承的空类空间还是1，但是虚继承涉及虚表（虚指针），
 * 所以sizeof（d）=8。
 * 
 * 综上所述，每个对象所占用的存储空间只是该对象的非静态数据成员的总和，
 * 其他都不占用存储空间，包括成员函数和静态数据成员。
 * 函数代码是存储在对象空间之外的，而且，函数代码段是公用的，
 * 即如果对同一个类定义了10个对象，这些对象的成员函数对应的是
 * 同一个函数代码段，而不是10个不同的函数代码段。
sizeof(a):1
sizeof(b):1
sizeof(c):1
sizeof(d):8
sizeof(e):1
 */