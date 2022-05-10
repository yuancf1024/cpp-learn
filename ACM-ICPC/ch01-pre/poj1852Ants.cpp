/* Ants(POJ No.1852)
n只蚂蚁以1cm/s的速度在长为L的棍子上爬，给出n只蚂蚁的初始距离左端的距离x，
但不知道他们的爬行方向。规定两只蚂蚁相遇时，不能交错通过，
只能个自反向爬回去。问所有蚂蚁落下棍子的最短时间和最长时间。

Sample Input

第一行：表示样例数目
第二行：杆子长度和蚂蚁数量
第三行：依次为蚂蚁距离杆子左端点的距离
所有的输入值为不大于1000000的整数，且以空格符间隔

2
10 3
2 6 7
214 7
11 12 7 13 176 23 191

Sample Output

4 8
38 207
*/

#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1060000;
// int m;
int m, L, n;
int x[MAX_N];

// 核心代码，自定义函数
void solve() {
    // 计算最短时间
    int minT = 0;
    for (int i = 0; i < n; i++) {
        minT = max(minT, min(x[i], L - x[i])); // 所有蚂蚁都朝向较近的端点走
    }

    // 计算最长时间
    int maxT = 0;
    for (int i = 0; i < n; i++) {
        maxT = max(maxT, max(x[i], L - x[i])); // 可以换个角度思考，蚂蚁相遇后保持原样继续前进，不影响总时间
        // 要求最长时间，只要求蚂蚁到竿子端点的最大距离就好
    }

    printf("%d %d\n", minT, maxT);
}

int main() {
    // 从标准输入读入
    scanf("%d", &m);
    while (m--) {
        scanf("%d%d", &L, &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &x[i]);
        }

        // 输出到标准输出
        solve();
    }
    return 0;
}