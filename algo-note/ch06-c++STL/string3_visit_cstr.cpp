#include <cstdio>
#include <string>

using namespace std;

int main() { string str = "abcd";
    printf("%s\n", str.c_str()); // 将string型str使用c_str()变为字符数组
    return 0;
}