#include <iostream>

using namespace std;

class Base {
public:
    Base() { cout << "Base::Base()" << endl; }
    ~Base() { cout << "Base::~Base()" << endl; }
};

class Derive:public Base {
public:
    Derive() { cout << "Derive::Derive()" << endl; }
    ~Derive() { cout << "Derive::~Derive()" << endl; }
};

int main() { 
    Base* pBase = new Derive(); 
    /*这种base classed的设计目的是为了用来"通过base class接口处理derived class对象"*/
    delete pBase;
    return 0;
}

/**
 * @brief 析构函数不是虚函数容易引发内存泄漏
 * 声明了两个类Base和类Derive，类Derive继承于类Base，
 * 两个类各自有构造函数和析构函数，并且基类和派生类的析构函数都是非虚函数。
 * 从上面的执行结果可以看出，析构函数的调用结果是存在问题的，
 * 也就是说析构函数只做了局部销毁工作，
 * 这可能形成资源泄漏、损坏数据结构等问题。
 * 而解决此问题的方法很简单，只要给基类一个virtual析构函数即可
Base::Base()
Derive::Derive()
Base::~Base()
 */