#include <iostream>
#include "student.h" // 需要include这个头文件,否则无法找到Student类

using namespace std;

void CStudent::display() { // 这里要注明Student类的
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "age:" << age << endl;
}