#include <iostream>

using namespace std;

class Box
{
private:
    /* data */
    int height, width, length;

public:
    Box(int h=2, int w=2, int l=2); // 在声明构造函数时指定默认参数
    // Box();
    // Box(int, int);
    ~Box() { // 析构函数
        cout << "Destructor called." << endl; // 析构函数里的内容
    }
    int volume() { 
        return height * width * length; 
    }
};

Box::Box(int h, int w, int len/* args */) // 在定义函数时可以不指定默认参数
{
    height = h;
    width = w;
    length = len;
}

// int Box::volume() 

// Box::~Box()
// {
// }

int main() {
    Box box1;
    cout << "The volume of box1 is " << box1.volume() << endl;
    cout << "hello." << endl;
    return 0;
}

/**
 * @brief 
 * 定义了类Box的析构函数，析构函数中输出Destructor called.，
 * 也就是析构函数被执行时就会输出这条消息。
 * 由程序的执行结果可以看出，析构函数是对象释放内存前执行的。
 * 如果用户没有编写析构函数，编译系统会自动生成一个默认的析构函数，
 * 但不进行任何操作，所以许多简单的类中没有用显式的析构函数。
The volume of box1 is 8
hello.
Destructor called.
 */