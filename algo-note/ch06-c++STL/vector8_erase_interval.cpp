#include <cstdio>
#include <vector>

using namespace std;

int main() { 
    vector<int> vi;
    for (int i = 5; i <= 9; i++) {
        vi.push_back(i); // 将5 6 7 8 9依次插入vi末尾
    }
    // 删除8 (因为vi.begin()对应的是vi[0], 所以8不是对应vi.begin() + 4)
    vi.erase(vi.begin() + 1, vi.begin() + 4); // 删除vi[1], vi[2], vi[3]
    // vi.insert(vi.begin() + 2, -1); // 将-1插入vi[2]的位置
    for (int i = 0; i < vi.size(); i++) {
        printf("%d ", vi[i]); // 1 2 -1 3 4 5
    }
    // printf("%d\n", vi.size());
    return 0;
}