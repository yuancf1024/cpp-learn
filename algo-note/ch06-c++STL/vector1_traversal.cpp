#include <cstdio>
#include <vector>

using namespace std;

int main() { 
    vector<int> vi;
    for (int i = 1; i <= 5; i++) {
        vi.push_back(i);
    }
    // vi.begin()取vi的首元素地址,而it指向这个地址
    vector<int>::iterator it = vi.begin();
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(it + i)); // 输出vi[i]
    }
    return 0;
}