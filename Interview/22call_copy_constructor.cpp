#include <iostream>

using namespace std;

class A
{
public:
	A() {};
	A(const A& a)
	{
		cout << "copy constructor is called" << endl;
	};
	~A() {};
};

void useClassA(A a) {}

A getClassA()//此时会发生拷贝构造函数的调用，虽然发生NRV优化，但是依然调用拷贝构造函数
{
	A a;
	return a;
}

//  VS2019下，此时编辑器会进行（Named return Value优化）NRV优化,
// 不调用拷贝构造函数 ，如果是引用传递的方式返回当前函数体内生成的对象时，
// 并不发生拷贝构造函数的调用
// A& getClassA2()
// {
// 	A a;
// 	return a;
// }


int main()
{
	A a1,a3,a4;
	A a2 = a1;  //调用拷贝构造函数,对应情况1
    // 用类的一个实例化对象去初始化另一个对象的时候

	useClassA(a1);//调用拷贝构造函数，对应情况2
    // 函数的参数是类的对象时（非引用传递）

	a3 = getClassA();//发生NRV优化，但是值返回，依然会有拷贝构造函数的调用 情况3
    // 函数的返回值是函数体内局部对象的类的对象时 ,此时虽然发生（Named return Value优化）NRV优化，
    // 但是由于返回方式是值传递，所以会在返回值的地方调用拷贝构造函数
	// a4 = getClassA2(a1);//发生NRV优化，且引用返回自身，不会调用
    return 0;
}
