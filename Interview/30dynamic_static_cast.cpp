#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
	Base() :b(1) {}
	virtual void fun() {};
	int b;
};

class Son : public Base
{
public:
	Son() :d(2) {}
	int d;
};

/*
reinterpret_cast

reinterpret_cast<type-id> (expression)

type-id 必须是一个指针、引用、算术类型、函数指针或者成员指针。
它可以用于类型之间进行强制转换。

const_cast

const_cast<type_id> (expression)

该运算符用来修改类型的const或volatile属性。
除了const 或volatile修饰之外， type_id和expression的类型是一样的。
用法如下：

- 常量指针被转化成非常量的指针，并且仍然指向原来的对象
- 常量引用被转换成非常量的引用，并且仍然指向原来的对象
- const_cast一般用于修改底指针。如const char *p形式

static_cast

static_cast < type-id > (expression)

该运算符把expression转换为type-id类型，
但没有运行时类型检查来保证转换的安全性。它主要有如下几种用法：

用于类层次结构中基类（父类）和派生类（子类）之间指针或引用引用的转换

进行上行转换（把派生类的指针或引用转换成基类表示）是安全的

进行下行转换（把基类指针或引用转换成派生类表示）时，由于没有动态类型检查，
所以是不安全的

用于基本数据类型之间的转换，如把int转换成char，把int转换成enum。
这种转换的安全性也要开发人员来保证。

把空指针转换成目标类型的空指针
把任何类型的表达式转换成void类型
注意：static_cast不能转换掉expression的const、volatile、或者__unaligned属性。

dynamic_cast

有类型检查，基类向派生类转换比较安全，但是派生类向基类转换则不太安全

dynamic_cast <type-id> (expression)

该运算符把expression转换成type-id类型的对象。type-id 必须是类的指针、
类的引用或者void*

如果 type-id 是类指针类型，那么expression也必须是一个指针，
如果 type-id 是一个引用，那么 expression 也必须是一个引用

dynamic_cast运算符可以在执行期决定真正的类型，
也就是说expression必须是多态类型。如果下行转换是安全的（也就说，
如果基类指针或者引用确实指向一个派生类对象）
这个运算符会传回适当转型过的指针。如果 如果下行转换不安全，
这个运算符会传回空指针（也就是说，基类指针或者引用没有指向一个派生类对象）

dynamic_cast主要用于类层次间的上行转换和下行转换，还可以用于类之间的交叉转换

在类层次间进行上行转换时，dynamic_cast和static_cast的效果是一样的

在进行下行转换时，dynamic_cast具有类型检查的功能，比static_cast更安全

*/

int main()
{
	int n = 97;

	//reinterpret_cast
	int *p = &n;
	//以下两者效果相同
	char *c = reinterpret_cast<char*> (p); 
	char *c2 =  (char*)(p);
	cout << "reinterpret_cast输出："<< *c2 << endl;
	//const_cast
	const int *p2 = &n;
	int *p3 = const_cast<int*>(p2);
	*p3 = 100;
	cout << "const_cast输出：" << *p3 << endl;
	
	Base* b1 = new Son;
	Base* b2 = new Base;

	//static_cast
	Son* s1 = static_cast<Son*>(b1); //同类型转换
	Son* s2 = static_cast<Son*>(b2); //下行转换，不安全
	cout << "static_cast输出："<< endl;
	cout << s1->d << endl;
	cout << s2->d << endl; //下行转换，原先父对象没有d成员，输出垃圾值

	//dynamic_cast
	Son* s3 = dynamic_cast<Son*>(b1); //同类型转换
	Son* s4 = dynamic_cast<Son*>(b2); //下行转换，安全
	cout << "dynamic_cast输出：" << endl;
	cout << s3->d << endl;
	if(s4 == nullptr)
		cout << "s4指针为nullptr" << endl;
	else
		cout << s4->d << endl;
	
	
	return 0;
}
//输出结果
//reinterpret_cast输出：a
//const_cast输出：100
//static_cast输出：
//2
//-33686019
//dynamic_cast输出：
//2
//s4指针为nullptr
