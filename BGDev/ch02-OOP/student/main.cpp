#include <iostream>
#include "student.h"

int main() { 
    CStudent stu1; // 定义stu1对象
    stu1.display(); // 指向stu1对象的成员函数

    return 0;
}

/**
 * @brief 
num:-314395928
name:$
age:2003570944
这种结果是由于还没有对数据成员进行初始化导致的，
下面的一节会介绍如何初始化一个对象。
 */