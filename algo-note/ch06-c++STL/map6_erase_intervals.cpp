#include <cstdio>
#include <map>

using namespace std;

int main() { map<char, int> mp;
    mp['a'] = 1;
    mp['b'] = 2;
    mp['c'] = 3;
    map<char, int>::iterator it = mp.find('b');
    mp.erase(it, mp.end()); // 删除it之后的所有映射, 即 b 2 和 c 3
    for (map<char, int>::iterator it = mp.begin(); it != mp.end(); it++) {
        printf("%c %d\n", it->first, it->second);
    }
    // printf("%c %d\n", it->first, it->second);
    return 0;
}