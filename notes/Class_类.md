## 第七章 类

#### 1、成员函数：

* 直接定义在类内部的函数默认是**inline**的；
* 成员函数可以通过`this`指针显式地来访问对象；
* `this`是一个常量指针；

#### 2、`const`成员函数：

表明传入该函数的指针是一个指向常量对象的指针，在该函数内不能修改成员变量内容；

```c++
const (object_type) *const [this] = &(this_object);
```

#### 3、合成的默认构造函数：

* 如果存在类内初始值，则使用它们来初始化成员；
* 否则，对成员执行默认初始化；

#### 4、友元：

* 友元声明只能出现在类的内部，一般在类定义的开始或结束集中声明；
* 友元可以运行其他类或者函数方位它的非公有成员；

#### 5、`*this`成员函数：

* 重载非**常量**的版本接口；

```c++
#include <iostream>

using namespace std;

class X {
  int counter = 0;

  void _core_add (int x) const {
    cout << counter + x << endl;;
  }

public:
  X () = default;

  X &selfplus(void) {
    counter += 1;
    return *this;
  }

  void print (void) {
    cout << counter << endl;
  }

  X &_wrapper_add (int x) {
    this->_core_add(x);
    return *this;
  }

  const X &_wrapper_add (int x) const {
    this->_core_add(x);
    return *this;
  }
};


int main (int argc, char **argv) {
  X x;
  const X y;

  x.selfplus().selfplus();
  x.print();

  x._wrapper_add(1000)._wrapper_add(99);
  y._wrapper_add(10);
  return 0;
}
```

#### 6、类的前置声明：

* 需要定义指向这种类类型的指针或引用；
* 声明以该类类型为参数或返回值的函数；

#### 7、类成员的初始化顺序：

并非与初始值列表中的顺序一致，而是按照成员的定义顺序；

#### 8、委托构造函数：

在同一个类对象中进行；

