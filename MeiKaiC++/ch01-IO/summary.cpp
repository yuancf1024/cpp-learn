/*
    示例程序
*/

#include <ctime>
#include <cstdlib> // 生成随机数时需要
// #include <string> // 使用字符串时需要
#include <iostream> // 输入输出流需要

using namespace std;

int main() {
    int a; // a 是int型变量
    a = 1; // 赋值（创建变量后赋值）
    int b = 5; // 初始化(在创建变量时赋值)
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    srand(time(NULL)); // 设置随机数种子
    int lucky = rand() % 10; // 0 ~ 9 的随机数
    cout << "今天的幸运数字是 " << lucky << "。\n";
    cout << "除以2的商是 " << lucky / 2 << "。\n";
    cout << "除以2的余数是 " << lucky % 2 << "。\n";

    // 常量对象，不可修改的值
    const double PI = 3.14;
    double r;
    cout << "半径: ";
    cin >> r;
    cout << "半径为 " << r << "圆的面积是"
        << (PI * r * r) << "。\n";

    string name; // 姓名
    cout << "姓名: "; // 提示输入姓名
    cin >> name; // 读入(跳过空格)
    cout << "\a 你" "好，" << name << "。\n";
}
