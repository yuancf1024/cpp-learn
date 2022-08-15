/**
 * @file 2-this.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-15
 * 
 * @copyright Copyright (c) 2022
 * 
C++ Primer Page 258

引入 this：

当我们调用成员函数时，实际上是替某个对象调用它。

成员函数通过一个名为 this 的额外隐式参数来访问调用它的那个对象，
当我们调用一个成员函数时，用请求该函数的对象地址初始化 this。
例如，如果调用 total.isbn()则编译器负责把 total 的地址传递给 
isbn 的隐式形参 this，可以等价地认为编译器将该调用重写成了以下形式：

```cpp
//伪代码，用于说明调用成员函数的实际执行过程
Sales_data::isbn(&total)
```

其中，调用 Sales_data 的 isbn 成员时传入了 total 的地址。

在成员函数内部，我们可以直接使用调用该函数的对象的成员，
而无须通过成员访问运算符来做到这一点，因为 this 所指的正是这个对象。
任何对类成员的直接访问都被看作是对 this 的隐式引用，
也就是说，当 isbn 使用 bookNo 时，它隐式地使用 this 指向的成员，
就像我们书写了 this->bookNo 一样。

对于我们来说，this 形参是隐式定义的。
实际上，任何自定义名为 this 的参数或变量的行为都是非法的。
我们可以在成员函数体内部使用 this，因此尽管没有必要，
我们还是能把 isbn 定义成如下形式：

```cpp
std::string isbn() const { return this->bookNo; }
```

因为 this 的目的总是指向“这个”对象，所以 this 是一个常量指针
（参见2.4.2节，第56页），我们不允许改变 this 中保存的地址。
 */

#include <iostream>
using namespace std;

class Box{
    public:
        Box(){;}
        ~Box(){;}
        Box* get_address()   //得到this的地址
        {
            return this;
        }
};

int main(){
    
    Box box1;
    Box box2;
    // Box* 定义指针p接受对象box的get_address()成员函数的返回值，并打印
    
    Box* p = box1.get_address();  
    cout << p << endl;
    
    p = box2.get_address();
    cout << p << endl; 

    return 0;
}

/**
 * @brief 
 * this 指针的类型可理解为 Box*。
此时得到两个地址分别为 box1 和 box2 对象的地址。

0x7ffc0e0aa69e
0x7ffc0e0aa69f
 */