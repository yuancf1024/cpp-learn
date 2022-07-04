#include <iostream>

using namespace std;

// val 的阶乘是val*(val-1)*(val-2)...*((val - (val-1))*1)
int fact(int val) { int ret = 1; // 局部变量，用于保存计算结果
    while (val > 1) {
        ret *= val--; // 把ret和val的乘积赋给ret，然后将val减1
    }
    return ret;
} 

int main() {
    int n;
    cin >> n;
    int j = fact(n);
    cout << n << "! is " << j << endl;
    return 0;
}