// 求三个整数值中的最大值

#include <iostream>

using namespace std;

int main() { 
    int a, b, c;

    cout << "整数a: "; cin >> a;
    cout << "整数b: "; cin >> b;
    cout << "整数c: "; cin >> c;

    int max = a;
    if ( b > max)
        max = b;
    if (c > max)
        max = c;

    cout << "最大值为: " << max << ".\n";
}