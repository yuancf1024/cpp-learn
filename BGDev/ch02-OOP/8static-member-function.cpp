#include <iostream>

using namespace std;

class CStudent {
public:
    CStudent (int n, int s):num(n), score(s) {} // 定义构造函数
    void total();
    static double average(); // 静态成员函数
private:
    int num;
    int score;
    static int count;
    static int sum; // 这两个静态成员数据是所有对象共享的
};

int CStudent::count = 0; // 定义静态数据成员
int CStudent::sum = 0;

void CStudent::total() { // 定义非静态成员函数
    sum += score; // 非静态数据成员函数中可使用静态数据成员、非静态数据成员
    count++;
}

double CStudent::average() { // 定义静态成员函数
    cout << sum << " " << count << endl;
    return sum * 1.0 / count;  // 可以直接引用静态数据成员,不加类名
}

int main() { CStudent stu1(1, 100);
    stu1.total(); // 调用对象的非静态成员函数
    CStudent stu2(2, 98);
    stu2.total();
    CStudent stu3(3, 99);
    stu3.total();
    cout << CStudent::average() << endl; // 调用类的静态成员函数,输出99
    // cout << CStudent::sum << " " << CStudent::count << endl; // 无法直接打印
    return 0;
}

/**
 * @brief 
 * 
 * 
297 3 // CStudent::sum CStudent::count
99
 */
