#include <cstdio>
#include <queue>

using namespace std;

int main() { 
    // 最小堆
    // priority_queue<int, vector<int>, greater<int>> q; // greater 表示数字小的优先级越大
    // 最大堆
    priority_queue<int, vector<int>, less<int>> q; // less 表示数字大的优先级越大 默认是大顶堆
    q.push(3);
    q.push(4);
    q.push(1);
    printf("%d\n", q.top());
    return 0;
}