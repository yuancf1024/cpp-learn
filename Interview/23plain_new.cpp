#include <iostream>
#include <string>

using namespace std;

int main()
{
	try
	{
		char *p = new char[10e11]; // error: expression in new-declarator must have integral or enumeration type
		delete p;
	}
	catch (const std::bad_alloc &ex)
	{
		cout << ex.what() << endl;
	}
	return 0;
}
//执行结果：bad allocation
