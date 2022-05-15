// 读入姓名并打招呼（包括空格）
#include <string>
#include <iostream>

using namespace std;

int main() {
    string name; // 姓名

    cout << "姓名: "; // 提示输入姓名
    getline(cin, name); // 读入姓名（包括空格）

    cout << "你好, " << name << "。\n";
}