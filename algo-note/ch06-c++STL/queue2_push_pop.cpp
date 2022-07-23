#include <cstdio>
#include <queue>

using namespace std;

int main() { queue<int> q;
    for (int i = 1; i <= 5; i++) {
        q.push(i); // 依次入队1 2 3 4 5
    }
    for (int i = 1; i <= 3; i++) {
        q.pop(); // 出队首元素三次(即依次出队1 2 3)
    }
    printf("%d\n", q.front());
    return 0;
}