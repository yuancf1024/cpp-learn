#include <iostream>

using namespace std;

class CBox {
public:
    CBox(){};
    ~CBox(){};
};

int main() { 
    CBox boxobj;
    cout << sizeof(boxobj) << endl; 

    return 0;
}

/**
 * @brief 类中构造函数、析构函数的空间占用情况
 * 类CBox中只有构造函数和析构函数，
 * 类CBox的对象boxobj的大小也只有1Byte，和空类对象是一样的，
 * 所以可以得出，构造函数和析构函数也是不占空间的。
1
 */