## 第十章 泛型算法

#### 1、泛型：
标准库通过提供基于**模板**的算法类/方法来为各类容器提供常用的算法支持；

#### 2、back_inserter：
插入迭代器，在使用诸如`std::copy`的方法时可以用来向目标容器中插入元素；

#### 3、lambda：
匿名内联函数，可以被定义在其他成员/全局函数内部；
```c++
[capture list](parameter list) -> return type { function body }
```

* 隐式捕获：
`&`采用引用捕获，`=`采用值捕获；不显式指定捕获列表，完全由编译器自动推导；
```c++
auto x = find_if(words.begin(), words.end(), [=](const string &s) { return s.size() >= sz; } );
```

* 可变值lambda：
参数列表后加入`mutable`关键字；
```c++
auto y = [x]() mutable { return ++x; };
```

* bind函数：
```c++
...
using namespace std::placeholders;

bool checkSize(const string &str, int val) {
    return val > str.length();
}

int main (int argc, char **argv) {
    vector<int> v{0, 3, 6, 7, 1};
    // 扩展谓词的参数列表；
    auto count = find_if(v.begin(), v.end(), bind(checkSize, "apple", _1));
    cout << *count << endl;
     
    return 0;
}
```
