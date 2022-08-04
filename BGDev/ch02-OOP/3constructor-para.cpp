#include <iostream>

using namespace std;

#define pi 3.1415

class Circle {
private:
    /* data */
    int radius; // 数据成员

public:
    // Circle(/* args */);
    Circle(int r); // 形参列表
    double Area();
};

// Circle(/* args */) {}
// Circle::Circle(int r) { 
//     radius = r; 
// }

// C++还提供另一种初始化数据成员的方法：参数初始化表。
Circle::Circle(int r):radius(r) {} // 后面无分号

double Circle::Area() { 
    return pi * radius * radius; 
}

/**
 * @brief 构造函数带了一个整型的参数，并在构造函数中将r参数赋值给了
 * 成员变量radius。定义对象时可利用构造函数直接对成员变量赋值。
 * 
 */

int main() { Circle cir1(10);
    cout << "cir1's area: " << cir1.Area() << endl;
    Circle cir2(1);
    cout << "cir2's area: " << cir2.Area() << endl;
    return 0;
}

/**
 * @brief 
 * 
cir1's area: 314.15
cir2's area: 3.1415
 */