## 第二章 变量和基本类型

#### 1、选择类型的一些经验准则：

- 使用`int`执行整数运算，如果数值超过了`int`的表示范围，选用`long long`；
- 在算术表达式中不要使用`char`或`bool`，因为`char`在不同机器上的表现方式不一样。
- 执行浮点数运算选用`double`，因为`double`精度更高，且运算代价和`float`没有相差无几。

#### 2、整数和浮点数字面值：

* 十进制字面值的类型是`int`、`long`和`long long`中尺寸最小的那个。八进制和十六进制字面值的类型是能容纳其数值的`int`、`unsigned int`、`long`、`unsigned long`、`long long`和`unsigned long long`中尺寸最小者。
* 默认的，浮点型字面值是一个`double`类型。

#### 3、列表初始化：

```c++
int x = 0;
int x = {0};
int x(0);
int x{0};
```

#### 4、默认初始化：

定义于函数体之外的变量被初始化为0。定义在函数体内部的内置类型变量将**不被初始化**。一个未被初始化的内置类型变量的值是未定义的。

#### 5、引用：

* 引用只是一种别名，因此必须被初始化；
* 不能定义指向引用的指针；

#### 6、指针：

* 定义空指针：

  ```c++
  int *p1 = nullptr;
  int *p2 = 0;
  int *p3 = NULL; // <cstdlib>
  ```

#### 7、常量：

* 常量引用必须初始化：

  ```c++
  const int bufSize = 128;
  ```

  编译器将在编译过程中把**当前文件内**用到该变量的地方都替换成对应的值；

* 底层`const`与顶层`const`：

  ```c++
  int i = 0;
  const int x = 10;
  const int *p1 = &i;
  const int *const p2 = p1; 
  const int &r = x;
  ```

#### 8、常量表达式：

* 值不会改变，且在编译过程中就能得到计算结果的表达式。

  ```c++
  constexpr int size (int x) {
      return x * 10;
  }
  constexpr int mf = 20;
  constexpr int limit = mf + 1;
  constexpr int sz = size(100);
  ```

* 使用`const`与`constexpr`构建常量指针：

```c++
#include <iostream>

using namespace std;

constexpr int y = 100;
int x = 10;
// int k = 10;

int main (int argc, char **argv) {
  static int k = 10;

  // above two are all "const" pointer;
  const int *const p1 = &y;
  constexpr const int *p2 = &y;

  // the aim defined out of function or "static";
  constexpr int *p3 = &k;

  return 0;
}
```

#### 9、类型别名：

* `typedef`：

  ```c++
  typedef double wages;
  ```

* `using`：

  ```c++
  using wages = double;
  ```

#### 10、`auto`：

```c++
const int ci = i;
auto e = &ci; // const int* e;

const auto f = ci; // const int;
auto &q = ci; // const int&;
// j -> 'int'
const auto &j = 42;
```

#### 11、`decltype`：

```c++
int x = 10, y = 20;
int *p = &x; 

// reference, because of the de-reference pointer operation;
decltype(*p) c = x; 
// reference;
decltype((x)) d = y;
```

