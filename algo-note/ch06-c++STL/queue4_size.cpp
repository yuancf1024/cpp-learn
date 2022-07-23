#include <cstdio>
#include <queue>

using namespace std;

int main() { queue<int> q;
    for (int i = 1; i <= 5; i++) {
        q.push(i); // push(i)用以将i压入队列
    }
    printf("%ld\n", q.size()); // 队列中有5个元素
    return 0;
}