#include <iostream>

using namespace std;

class Animal {
public:
    virtual void GetColor() = 0; // 纯虚函数
};

class Dog : public Animal {
public:
    virtual void GetColor() { 
        cout << "Yellow" << endl;
     }
};

class Pig : public Animal {
public:
    virtual void GetColor() { 
        cout << "White" << endl;
    }
};

int main() { 
    Animal cAnimal;
    return 0;
}

/**
 * @brief 纯虚函数的使用举例
 * 
 * 如果一个类中含有纯虚函数，那么任何试图对该类进行实例化的语句都是错误的，
 * 因为抽象基类是不能被直接调用的，
 * 而必须被子类继承重载以后，再根据要求调用其子类的方法，
 * 且在子类中一定要实现纯虚函数的定义，不然编译时会出错。
 * 
 * 该程序编译失败 ：因为在例2.30中声明了一个动物类（Animail），
 * 类中有一函数GetColor可取得动物颜色，但动物有很多很多种，
 * 颜色自然无法确定，所以就把它声明为纯虚函数，
 * 也就是只声明函数名不去定义（实现）它，不能通过编译。
 * 有一点需要注意，纯虚函数不能实例化，但可以声明指针，
 * 所以上面的程序编译时，编译器会告诉你：
 * 由于它的成员的原因，无法抽象类Animail，
 * 并且警告你GetColor（）没有定义，所以报错。
 * 
不允许使用抽象类类型 "Animal" 的对象:C/C++(322)
3pure-virtual-function.cpp(25, 12): 函数 "Animal::GetColor" 是纯虚拟函数
error: cannot declare variable ‘cAnimal’ to be of abstract type ‘Animal’
 * 
 */