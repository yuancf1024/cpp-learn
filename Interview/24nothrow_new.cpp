#include <iostream>
#include <string>

using namespace std;

int main()
{
	char *p = new(nothrow) char[10e11]; // error: expression in new-declarator must have integral or enumeration type
	if (p == NULL) 
	{
		cout << "alloc failed" << endl;
	}
	delete p;
	return 0;
}
//运行结果：alloc failed
