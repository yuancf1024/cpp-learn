#include <cstdio>
#include <vector>

using namespace std;

int main() { 
    vector<int> vi;
    for (int i = 1; i <= 3; i++) {
        vi.push_back(i); // 将1, 2, 3依次插入vi末尾
    }
    printf("%d\n", vi.size());
    return 0;
}