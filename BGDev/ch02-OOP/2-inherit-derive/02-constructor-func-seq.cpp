#include <iostream>

using namespace std;

class CBase {
public:
    CBase() { 
        cout << "CBase::CBase()" << endl;
    }
    ~CBase() { 
        cout << "CBase::~CBase()" << endl; 
    }
};

class CBase1 : public CBase {
public:
    CBase1() { 
        cout << "CBase::Base1()" << endl;
    }
    ~CBase1() { 
        cout << "CBase::~Base1()" << endl;
    }
};

class CDerive {
public:
    CDerive() { 
        cout << "CDerive::CDerive()" << endl;
    }
    ~CDerive() { 
        cout << "CDerive::~CDerive()" << endl;
    }
};

class CDerive1:public CBase1 {
private:
    CDerive m_derive;
public:
    CDerive1() { 
        cout << "CDerive1::CDerive1()" << endl;
    }
    ~CDerive1() { 
        cout << "CDerive1::~CDerive1()" << endl;
    }
};

int main() { 
    CDerive1 derive;
    return 0;
}

/**
 * @brief 构造函数的调用顺序
 * 声明了4个类，CBase1继承于CBase、CDerive1继承于CBase1、
 * CDerive1中有CDerive的成员变量，最后定义一个CDerive1对象，
 * 用来确定各种基类、派生类的构造函数和析构函数的执行顺序。
 * 执行结果与上文中描述的调用顺序相符。
 * 
 * 总的来说，构造函数的调用顺序是：
 * ①如果存在基类，那么先调用基类的构造函数，
 * 如果基类的构造函数中仍然存在基类，那么程序会继续进行向上查找，
 * 直到找到它最早的基类进行初始化
 * （如上例中类Derive1，继承于类Base与Base1）；
 * ②如果所调用的类中定义的时候存在对象被声明，那么在基类的构造函数调用
 * 完成以后，再调用对象的构造函数
 * （如上例在类Derive1中声明的对象Derive m_derive）；
 * ③调用派生类的构造函数（如上例最后调用的是Derive1类的构造函数）。
CBase::CBase()
CBase::Base1()
CDerive::CDerive()
CDerive1::CDerive1()
CDerive1::~CDerive1()
CDerive::~CDerive()
CBase::~Base1()
CBase::~CBase()
 */