#include<iostream>
using namespace std;
 
class Parent{};

class Child1 : public Parent
{
public:
	int i;
	Child1(int e):i(e){}
};

class Child2 : public Parent
{
public:
	double d;
	Child2(double e):d(e){}
};

int main()
{
	Child1 c1(5);
	Child2 c2(4.1);
	Parent* pp;
	Child1* pc1;
    Child2* pc2;
 	
	pp=&c1; 
	pc1=(Child1*)pp;  // 类型向下转换 强制转换，由于类型仍然为Child1*，不造成错误
	cout<<pc1->i<<endl; //输出：5
 
	pp=&c2;
	pc1=(Child1*)pp;  //强制转换，且类型发生变化，将造成错误
	cout<<pc1->i<<endl;// 输出：1717986918
	// return 0;

    pp=&c2;
	pc2=(Child2*)pp;  //强制转换，且类型发生变化，将造成错误
	cout<<pc2->d<<endl;// 输出：1717986918
	return 0;
}

/*
5
1717986918
*/