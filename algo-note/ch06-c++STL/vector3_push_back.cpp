#include <cstdio>
#include <vector>

using namespace std;

int main() { vector<int> vi;
    for (int i = 1; i <= 3; i++) {
        vi.push_back(i); // 将1, 2, 3依次插入vi末尾
    }
    for (int i = 0; i < vi.size(); i++) { // size()函数会给出vi中元素的个数
        printf("%d ", vi[i]);
    }
    return 0;
}