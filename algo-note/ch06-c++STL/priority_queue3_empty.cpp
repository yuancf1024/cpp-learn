#include <cstdio>
#include <queue>

using namespace std;

int main() { 
    priority_queue<int> q;
    if (q.empty() == true) { // 一开始优先队列内没有元素，所以是空
        printf("Empty\n");
    } else {
        printf("Not Empty\n");
    }
    q.push(1);
    if (q.empty() == true) { // 在加入"1"后，优先队列非空
        printf("Empty\n");
    } else {
        printf("Not Empty\n");
    }
    return 0;
}