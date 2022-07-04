#include <cstdio>
#include <map>

using namespace std;

int main() { map<char, int> mp;
    mp['a'] = 10;
    mp['b'] = 20;
    mp['c'] = 30;
    mp.clear(); // 清空map
    printf("%d\n", mp.size());
    // map<char, int>::iterator it = mp.find('b');
    // mp.erase(it, mp.end()); // 删除it之后的所有映射, 即 b 2 和 c 3
    // for (map<char, int>::iterator it = mp.begin(); it != mp.end(); it++) {
    //     printf("%c %d\n", it->first, it->second);
    // }
    // printf("%c %d\n", it->first, it->second);
    return 0;
}