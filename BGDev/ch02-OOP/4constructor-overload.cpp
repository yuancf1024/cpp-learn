#include <iostream>

using namespace std;

class Box
{
private:
    /* data */
    int height, width, length;

public:
    Box(/* args */); // 声明一个无参的构造函数
    /*声明一个有参的构造函数,并用参数的初始化列表对数据成员初始化*/
    Box(int h, int w, int l):height(h),width(w),length(l) {}
    int volume();
};

Box::Box(/* args */) // 定义无参的构造函数
{
    height = 1;
    width = 2;
    length = 3;
}

int Box::volume() { 
    return height * width * length; 
}

// Box::~Box()
// {
// }

int main() { 
    Box box1; // 不指定实参
    cout << "box1's volume: " << box1.volume() << endl;
    Box box2(2, 5, 10); // 指定实参
    cout << "box2's volume: " << box2.volume() << endl;
    return 0;
}

/**
 * @brief 
 * 定义了两个构造函数，一个是无参的，一个是有参的，两个函数的函数名一样，
 * 但参数格式不一样，所以是函数重载。
 * 若定义对象时不指定实参，则调用无参的构造函数。
 * 
 * 调用构造函数时不必给出实参的构造函数，称为默认构造函数。
 * 无参的构造函数属于默认构造函数。一个类只能有一个默认构造函数。
 * 即使一个类中有多个构造函数，但建立对象时，都只执行其中一个构造函数。
box1's volume: 6
box2's volume: 100
 */