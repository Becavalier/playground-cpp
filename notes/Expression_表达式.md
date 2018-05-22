## 第四章 表达式

#### 1、左值与右值：

```c++
Foo &retVal(); // lvalue -> 对象的身份;
Foo retVal(); // rvalue -> 对象的值;
```

#### 2、`sizeof`运算符：

```c++
size_t size = sizeof(int);
cout << size << endl;
```

#### 3、类型转换：

```c++
doubel slope = sttaic_cast<double>(j) / i;

// transfer "void*";
double d = 10.11;
void *p = &d
double *dp = static_cast<double*>(p);

// "const cast"
int x = 10;
// "bottom-const"
const int *pc = &x;
char *p = const_cast<char*>(ip);
*p = 100;
cout << *p << endl;
```

