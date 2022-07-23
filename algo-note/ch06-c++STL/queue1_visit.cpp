#include <cstdio>
#include <queue>

using namespace std;

int main() { queue<int> q;
    for (int i = 1; i <= 5; i++) {
        q.push(i); // push(i)用以将i压入队列，因此依次入队1 2 3 4 5
    }
    printf("%d %d\n", q.front(), q.back()); // 输出的结果是1 5
    return 0;
}