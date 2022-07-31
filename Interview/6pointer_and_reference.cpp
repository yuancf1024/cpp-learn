#include <iostream>

using namespace std;

void test(int *p)
{
    int a=1;
    p=&a;
    cout<<p<<" "<<*p<<endl;
}

int main(void)
{
    int *p=NULL;
    test(p);
    if(p==NULL) {
        cout<<"指针p为NULL"<<endl;
    }
        
    return 0;
}
//运行结果为：
//0x22ff44 1
//指针p为NULL


