#include <iostream>

using namespace std;

class CBox {
public:
    CBox(int h, int w, int l) { 
        height = h;
        width = w;
        length = l;
        cout << "Constructor called. " << endl; // 构造函数被执行时输出的信息
    }
    ~CBox() { // 析构函数
        cout << "Destructor called. " << length << endl; // 析构函数被执行时输出
    }

    int volume() { 
        return height * width * length; 
    }

private:
    int height, width, length;
};

int main() { 
    CBox box1(1, 2, 3);
    cout << box1.volume() << endl;
    CBox box2(2, 3, 4);
    cout << box2.volume() << endl;
    return 0;
}

/**
 * @brief 构造函数和析构函数的执行顺序实例
 * 声明了类CBox，类中有一个构造函数和一个析构函数，
 * 当构造函数运行时会输出一句话，方便判断构造函数执行的时机；
 * 同样的，当析构函数运行时也会输出一句话，方便判断析构函数执行的时机。
 * 
 * 在一般情况下，调用析构函数的次序正好与调用构造函数的次序相反：
 * 最先被调用的构造函数，其对应的（同一对象中的）析构函数最后被调用；
 * 而最后被调用的构造函数，其对应的析构函数最先被调用。
 * 如上所示，先执行box2的析构函数，再执行box1的析构函数。
 * 可以简记为：先构造的后析构，后构造的先析构，它相当于一个栈，先进后出。
 * 但是，并不是在任何情况下都是按这一原则处理的。
 * 对象可以在不同的作用域中定义，可以有不同的存储类别，这些都会影响
 * 调用构造函数和析构函数的时机。
 * Output
Constructor called. 
6
Constructor called. 
24
Destructor called. 4
Destructor called. 3
 */