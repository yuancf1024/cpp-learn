// 猜数游戏（猜一个0~99的数）

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() { 
    srand(time(NULL)); // 设置随机数种子

    int no = rand() % 100; // 要猜的数：生成一个0~99的随机数
    int x; // 从键盘读入的值

    cout << "猜数字游戏开始!!\n";
    cout << "请猜一个0~99的数.\n";

    do {
        cout << "你猜的数字: ";
        cin >> x;

        if (x > no)
            cout << "\a猜一个更小的数吧.\n";
        else if (x < no)
            cout << "\a猜一个更大的数吧.\n";
    } while (x != no);

    cout << "正确!\n";
}