#include <cstdio>
#include <set>

using namespace std;

int main() { set<int> st;
    for (int i = 1; i <= 3; i++) {
        st.insert(i);
    }
    set<int>::iterator it = st.find(2); // 在set中查找2,返回其迭代器
    printf("%d\n", *it);
    // 以上两句也可以直接写成printf("%d\n", *(st.find(2));
    return 0;
}