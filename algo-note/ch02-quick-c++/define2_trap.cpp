#include <cstdio>

#define CAL(x) (x * 2 + 1)
/*宏替换是直接将对应的部分替换，然后才进行编译和运行*/

int main() { 
    int a = 1;
    printf("%d\n", CAL(a + 1)); 
    /*
    以为的计算：((a + 1)*2+1) = 5
    实际上的计算：(a + 1 * 2 + 1) = 4
    */
    return 0;
}