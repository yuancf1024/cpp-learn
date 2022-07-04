#include <cstdio>
#include <map>

using namespace std;

int main() { 
    map<char, int> mp;
    mp['c'] = 20;
    mp['c'] = 30; // 20被覆盖
    printf("%d\n", mp['c']); // 输出30
    return 0;
}