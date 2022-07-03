# algo-note

[toc]

## 更新日志

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