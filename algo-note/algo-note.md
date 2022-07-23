# algo-note

[toc]

## 更新日志

- [x] 2022-07-03 ch02-C/C++快速入门
- [x] 2022-07 ch03-入门模拟
- [x] 2022-07 ch06-C++标准模板库(STL)介绍 vector & set & string & map
- [ ] 2022-07-23 

## ch02-quick-C++

### 浮点数的比较

**1. 等于运算符(==)**

```cpp
const double eps = 1e-8;
#define Equ(a, b) ((fabs((a) - (b))) < (eps))
```

**2. 大于运算符(>)**

```cpp
#define More(a, b) (((a) - (b)) > (eps))
```

**3. 小于运算符(<)**

```cpp
#define Less(a, b) (((a) - (b)) < (-eps))
```

**4. 大于等于运算符(>=)**

```cpp
#define MoreEqu(a, b) (((a) - (b)) > (-eps))
```

**5. 大于等于运算符(<=)**

```cpp
#define LessEqu(a, b) (((a) - (b)) < (eps))
```

**6. 圆周率pi**

```cpp
const double Pi = acos(-1.0);
```

### 多点测试-输入

**1. while...EOF型**

> 当题目没有说明有多少数据需要读入时,就可以利用scanf的返回值是否为EOF来判断输入是否结束.

```cpp
// 读入整数
while (scanf("%d", &n) != EOF) {
    ...
}

// 读入字符串
while (scanf("%s", str) != EOF) {
    ...
}

while (gets(str) != NULL) {
    ...
}
```

示例代码:

```cpp
#include <cstdio>

int main() {
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF) {
        printf("%d\n", a + b);
    }
    return 0;
}
```

**2. while...break型**

> 题目要求当输入的数据满足某个条件时停止输入.

```cpp
// 当输入的两个a和b都为0时结束输入

// 在while...EOF的内部进行判断,当满足退出条件时中断break
#include <cstdio>
int main() {
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF) {
        if (a == 0 && b == 0) break;
        printf("%d\n", a + b);
    }
    return 0;
}

// 更简洁的写法,把退出条件的判断放到while语句,令其与scanf用逗号隔开
#include <cstdio>
int main() {
    int a, b;
    while (scanf("%d%d", &a, &b), a || b) {
        printf("%d\n", a + b);
    }
    return 0;
}

```

**3. while(T--)型**

> 在这种类型中,题目会给出测试数据的组数,然后才给出相应数量组数的输入数据.

```cpp
#include <cstdio>

int main() { int T, a, b;
    scanf("%d", &T);
    while (T--) {
        scanf("%d%d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}
```


### 多点测试-输出

**1. 正常输出**

> 这种输出类型要求需要每两组输出数据中间没有额外的空行,即输出数据是连续的多行.

**2. 每组数据输出之后都额外添加一个空行**

> 这个要求非常容易实现,只需要在每组输出结束之后额外输出一个换行符\n即可.

```cpp
#include <cstdio>

int main() {
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF) {
        printf("%d\n", a + b);
        printf("\n"); // 每组数据输出之后都额外添加一个空行
    }
    return 0;
}
```

**3. 两组输出数据之间有一个空行,最后一组数据后面没有空行**

> 一般出现在第三种输入类型while(T--)的情况下,只需要通过判断T是否减小到0来判断是否应当输出额外的换行.

```cpp
#include <cstdio>

int main() { 
    int T, n, a;
    scanf("%d", &T);
    while (T--) {
        int sum = 0; // 放置在while内,保持每组case sum初值为0
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            sum += a;
        }
        printf("%d\n", sum);
        if (T > 0)
            printf("\n");
    }
    return 0;
}
```

> 与上面类似的要求: 输出一行N个整数,每两个整数之间用空格隔开,最后一个整数后面不允许加上空格.

```cpp
for (int i = 0; i < N; i++) {
    printf("%d", a[i]);
    if (i < N - 1) 
        printf(" ");
    else
        printf("\n");
}
```

> 注意:
> 1. 在多点测试中,每一次循环都要重置一下变量和数组,否则在下一组数据来临的时候变量和数组的状态就不是初始状态了.
> 2. 重置数组一般使用memset 函数 或 fill函数.


## ch02-simulation



## ch06-C++STL

