#include <cstdio>
#include <queue>

using namespace std;

int main() { 
    queue<int> q; 
    if (q.empty() == true) { // 一开始队列内没有元素，所以是空
        printf("Empty\n");
    } else {
        printf("Not Empty\n");
    }
    q.push(1);
    if (q.empty() == true) { // 在入队 "1"后，队列非空
        printf("Empty\n");
    } else {
        printf("Not Empty\n");
    }
    return 0;
}