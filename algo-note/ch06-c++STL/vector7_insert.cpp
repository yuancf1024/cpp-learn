#include <cstdio>
#include <vector>

using namespace std;

int main() { 
    vector<int> vi;
    for (int i = 1; i <= 5; i++) {
        vi.push_back(i); // 将1, 2, 3, 4, 5依次插入vi末尾
    }
    // vi.clear();
    vi.insert(vi.begin() + 2, -1); // 将-1插入vi[2]的位置
    for (int i = 0; i < vi.size(); i++) {
        printf("%d ", vi[i]); // 1 2 -1 3 4 5
    }
    // printf("%d\n", vi.size());
    return 0;
}