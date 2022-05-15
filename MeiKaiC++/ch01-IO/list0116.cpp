// 随机生成一个0 ~ 9 的幸运数字并显示

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL)); // 设置随机数种子

    int lucky = rand() % 10; // 0 ~ 9 的随机数

    cout << "今天的幸运数字是" << lucky << "。\n";
}