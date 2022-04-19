#include <iostream>
#include <vector>

using namespace std;
// 打印数组的一个全排列
// 逻辑没有理解清楚
// k 表示要处理的子数组的数据个数
void printPermutations(vector<int>& data, int n, int k) {
    if (k == 1) {
        for (int i = 0; i < n; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < k; ++i) {
        int tmp = data[i];
        data[i] = data[k-1];
        data[k-1] = tmp;

        printPermutations(data, n, k-1);

        tmp = data[i];
        data[i] = data[k-1];
        data[k-1] = tmp;
    }
}

int main() {
    vector<int> a = {1, 2, 3, 4};
    printPermutations(a, 4, 4);
}

