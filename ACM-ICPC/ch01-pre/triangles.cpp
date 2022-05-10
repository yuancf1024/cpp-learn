/* 三角形
有n根棍子，棍子i的长度为ai。想要从中选出3根棍子组成周长尽可能长的三角形。请输出
最大的周长，若无法组成三角形则输出0.

限制条件
3<=n<=100
1<=ai<=10^6

输入
n = 5
a = {2, 3, 4, 5, 10}

输出
12 (选择3、4、5时)
*/

#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 100;

int n, a[MAX_N];

// 核心代码，自定义函数
void solve() {
    int ans = 0; // 答案

    // 让i<j<k，这样棍子就不会被重复选中了
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                int len = a[i] + a[j] + a[k]; // 周长
                int ma = max(a[i], max(a[j], a[k])); // 最长棍子的长度
                int rest = len - ma; // 其余两根棍子的长度之和

                if (ma < rest) {
                    // 可以组成三角形，如果可以则更新答案
                    ans = max(ans, len);
                }
            }
        }
    }
    // 输出
    printf("%d\n", ans);
}

int main() {
    // 从标准输入读入
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // while (scanf("%d", ))

    // 输出到标准输出
    // if (solve) puts("Yes");
    // else puts("No");
    solve();

    return 0;
}

/*
题解
核心逻辑，组成三角形的棍子中，最长的那根棍子需要小于剩下两根棍子之和；
同时注意棍子不能重复使用的条件。
*/