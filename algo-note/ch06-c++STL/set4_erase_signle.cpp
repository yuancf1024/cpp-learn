#include <cstdio>
#include <set>

using namespace std;

int main() { set<int> st;
    st.insert(100);
    st.insert(200);
    // st.insert(100);
    // st.insert(300);
    st.erase(100); // 利用find()函数找到100,然后用erase删除它
    // st.erase(st.find(200)); // 利用find()函数找到200,然后用erase删除它
    for (set<int>::iterator it = st.begin(); it != st.end(); it++) {
        printf("%d\n", *it);
    }
    return 0;
}