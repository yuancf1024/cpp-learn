#include <cstdio>
#include <set>
using namespace std;

int main() { set<int> st;
    st.insert(2); // 插入2 5 4
    st.insert(5);
    st.insert(4);
    printf("%d\n", st.size()); // 输出set内元素的个数
    return 0;
}