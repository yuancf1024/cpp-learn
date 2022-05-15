// 计算圆的周长和面积（其二：用常量对象表示圆周率）

#include <iostream>

using namespace std;

int main() {
    const double PI = 4.1416; // 圆周率 常量对象必须在声明时被初始化
    double r; // 半径

    cout << "半径:"; // 提示输入半径
    cin >> r; // 读入半径

    cout << "周长是" << 2 * PI * r << "。\n"; // 周长
    cout << "面积是" << PI * r * r << "。\n"; // 面积
}