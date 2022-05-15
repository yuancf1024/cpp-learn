// 计算圆的周长和面积（其一：用浮点数字面量表示圆周率）

#include <iostream>

using namespace std;

int main() {
    double r; // 半径
    cout << "半径:"; // 提示输入半径
    cin >> r; // 读入半径

    cout << "周长是" << 2 * 3.14 * r << "。\n"; // 周长
    cout << "面积是" << 3.14 * r * r << "。\n"; // 面积
}