#include <cstdio>
#include <queue>

using namespace std;

int main() { 
    priority_queue<int, vector<int>, greater<int>> q; // greater 表示数字小的优先级越大
    q.push(3);
    q.push(4);
    q.push(1);
    printf("%d\n", q.top());
    return 0;
}