#include <cstdio>
#include <set>

using namespace std;

int main() { 
    set<int> st;
    st.insert(20);
    st.insert(10);
    st.insert(40);
    st.insert(30);
    set<int>::iterator it = st.find(30);
    st.erase(it, st.end()); // 删除元素30至set末尾之间的元素,即30和40
    for (it = st.begin(); it != st.end(); it++) {
        printf("%d ", *it);
    }
    return 0;
}