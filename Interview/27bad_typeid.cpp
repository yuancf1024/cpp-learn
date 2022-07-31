#include <iostream>
#include <typeinfo>

using namespace std;

class A{
public:
  virtual ~A();
};

/*
bad_typeid：使用typeid运算符，
如果其操作数是一个多态类的指针，而该指针的值为 NULL，则会拋出此异常
*/

int main() {
	A* a = NULL;
	try {
  		cout << typeid(*a).name() << endl; // Error condition
  	}
	catch (bad_typeid){
  		cout << "Object is NULL" << endl;
  	}
    return 0;
}
//运行结果：bject is NULL
