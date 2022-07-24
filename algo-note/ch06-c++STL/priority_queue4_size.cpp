#include <cstdio>
#include <queue>

using namespace std;

int main() { priority_queue<int> q;
    q.push(3);
    q.push(4);
    q.push(1);
    printf("%ld\n", q.size()); // 优先队列中有三个元素
    return 0;
}