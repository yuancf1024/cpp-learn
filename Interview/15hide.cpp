#include <iostream>

using namespace std;

//父类
class A{
public:
    void fun(int a){
		cout << "A中的fun函数" << endl;
	}
};

//子类
class B : public A{
public:
    //隐藏父类的fun函数
    void fun(int a){
		cout << "B中的fun函数" << endl;
	}
};

int main(){
    /*
    两个函数参数相同，但是基类函数不是虚函数。
    **和重写的区别在于基类函数是否是虚函数
    */
    B b;
    b.fun(2); //调用的是B中的fun函数
    b.A::fun(2); //调用A中fun函数
    return 0;
}

/*
B中的fun函数
A中的fun函数
*/
