#include <iostream>

using namespace std;

class A{
public:
    int num1;
    int num2;
public:
    A(int a=0, int b=0):num1(a),num2(b){};
    A(const A& a){};
    //重载 = 号操作符函数
    A& operator=(const A& a){
        num1 = a.num1 + 1;
        num2 = a.num2 + 1;
        return *this;
    };
};
int main(){
    A a(1,1);
    A a1 = a;  //拷贝初始化操作，调用拷贝构造函数
    cout << a.num1 << " " << a.num2 << endl;
    A b;
    b = a;//赋值操作，对象a中，num1 = 1，num2 = 1；对象b中，num1 = 2，num2 = 2
    cout << b.num1 << " " << b.num2 << endl;
    return 0;
}
