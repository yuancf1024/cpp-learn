#include <cstdio>
#include <vector>

using namespace std;

int main() { vector<int> vi;
    for (int i = 1; i <= 5; i++) {
        vi.push_back(i);
    }

    // vector的迭代器不支持it < vi.end() 写法,因此循环条件只能用it != vi.end()
    for (vector<int>::iterator it = vi.begin(); it != vi.end(); it++) {
        printf("%d ", *it);
    }
    return 0;
}