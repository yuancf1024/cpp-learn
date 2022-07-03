#include <cstdio>
#include <set>

using namespace std;

int main() { set<int> st;
    st.insert(3); // insert(x) 将x插入set中
    st.insert(5);
    st.insert(2);
    st.insert(3);
    // 注意: set 不支持st.edn() 写法
    for (set<int>::iterator it = st.begin(); it != st.end(); it++) {
        printf("%d ", *it);
    }
    return 0;
}