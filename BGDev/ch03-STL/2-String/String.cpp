/*
实现string类是一道考验C++基础知识的好题，
接下来先看这样的一道题目，了解string类的内部实现
*/

#include <bits/stdc++.h>

class String {
public:
    String(const char *str = NULL); // 普通构造函数
    String(const String *other); // 拷贝构造函数
    ~String(); // 析构函数
    String &operator = (const String &other); // 赋值函数
    String &operator+(const String &other); // 字符串拼接
    bool operator==(const String &other); // 判断相等
    int getLength(); // 返回长度
private:
    char *m_data; // 私有变量保存字符串
};

/*
从上述程序可以看到，string类其实是一个对字符串指针有一系列操作动作的类，
也就是说，string类的底层是一个字符串指针。
这一题的参考答案以及注意点如下所示
*/

// 普通构造函数
String::String(const char *str) {

}

// String 的析构函数
String::~String() {

}


// 拷贝构造函数
String::String(const String &other) {

}

// 赋值函数
String & String::operator=(const String &other) {

}

// 字符串拼接
String & String::operator +(const String &other) {

}

// 判断相等
bool String::operator==(const String &other) {

}

// 返回长度
int String::getLength() {
    return strlen(m_data); 
}
/*
返回长度函数，只需用strlen直接计算char*的长度即可
*/