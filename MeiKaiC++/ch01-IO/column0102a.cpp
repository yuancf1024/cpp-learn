#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int x = rand(); // 生成大于等于0且小于等于 RAND_MAX的随机数
    int y = rand(); // 生成大于等于0且小于等于 RAND_MAX的随机数
    cout << "x的值是" << x << ", y的值是" << y << "。\n";
}