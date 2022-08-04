#include <iostream>

using namespace std;

class Box
{
private:
    /* data */
    int height, width, length;

public:
    // Box(/* args */); // 声明一个无参的构造函数
    // /*声明一个有参的构造函数,并用参数的初始化列表对数据成员初始化*/
    Box(int h=2, int w=2, int l=2); // 在声明构造函数时指定默认参数
    // Box();
    // Box(int, int);
    int volume();
};

Box::Box(int h, int w, int len/* args */) // 在定义函数时可以不指定默认参数
{
    height = h;
    width = w;
    length = len;
}

int Box::volume() { 
    return height * width * length; 
}

// Box::~Box()
// {
// }

int main() { 
    Box box1(1); // 不指定第2,3个实参
    cout << "box1's volume: " << box1.volume() << endl;
    Box box2(1, 3); // 不指定第3个实参
    cout << "box2's volume: " << box2.volume() << endl;
    // Box box1; // 不指定实参
    // /*该声明会报错 error: call of overloaded ‘Box()’ is ambiguous*/
    // cout << "box1's volume: " << box1.volume() << endl;
    // Box box2(15, 30); // 不指定第3个实参
    // /*该声明会报错 error: call of overloaded ‘Box(int, int)’ is ambiguous*/
    // cout << "box1's volume: " << box1.volume() << endl;
    return 0;
}

/**
 * @brief 
 * 定义了一个带有默认参数的构造函数，是在声明时指定默认参数，
 * 而定义时则可以不指定默认参数。定义对象时，可以传0~3个参数，
 * 传了几个参数，就替换前面的几个参数，其余都还是使用默认参数。
 * 
 * 使用默认参数的好处在于：调用构造函数时就算没有提供参数也不会出错，
 * 且对每一个对象能有相同的初始化状况。不过，应该在声明构造函数默认值时指定默认参数值，
 * 而不能只在定义构造函数时指定默认参数值。如果构造函数中的参数全指定了默认值，
 * 则在定义对象时，可给一个实参或多个实参，也可以不给实参。
box1's volume: 4
box2's volume: 6
 */