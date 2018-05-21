## 第三章 字符串、向量和数组

#### 1、头文件不应该包含`using`声明；

#### 2、初始化`string`对象：

```c++
string s1;
string s2(s1);
string s2 = s1;
string s3("YHSPY");
string s3 = "YHSPY";
string s4(10, 'A');
string s5 = {"YHSPY"};
```

#### 3、基本`string`操作：

```c++
string s1 = "YHSPY";
string s2 = "BEAUTY";

// string::size_type;
string::size_type size = s1.size();
cout << size << endl;

// basic operations;
cout << s1[1] << endl;
cout << s1 + s2 << endl;

// iteration;
for (auto c : s1) 
  cout << c << endl;
```

#### 4、初始化`vector`对象：

```c++
vector<int> v1;
vector<int> v2(v1);
vector<int> v2 = v1;
vector<int> v3(10, 1);
vector<int> v4(10);
vector<int> v5{1, 2, 3, 4, 5}
vector<int> v6 = {1, 2, 3, 4, 5};
```

#### 5、基本`vector`操作：

注意：**一定不能在遍历`vector`的时候改变`vector`对象的大小。**

```c++
vector<int> v = {1, 2, 3, 4, 5};

// vector::size_type;
vector<int>::size_type size = v.size();
cout << size << endl;

cout << v.size() << endl;
cout << v[1] << endl;

// iterator;
vector<int>::iterator it1; // r&w
vector<int>::const_iterator it2; // r
for (auto it = v.begin(); it != v.end(); it++) 
  cout << *it << endl;

// difference;
vector::difference_type
```

#### 6、数组：

```c++
int a1[10] = {0};
int a2[] = {1, 2, 3, 4};

// "c-like" string;
char s[] = "YHSPY";

int* a3[10] = {};
int (*ptr)[10] = &a;
int (&a_ref)[10] = a;

decltype(a1) a4; // "array" type;
auto a5(a1); // "int pointer" type;

// iterator;
int *head_p = begin(a1);
int *end_p = end(a1);
```

#### 7、C风格字符串：

```c++
string s("YHSPY");
const char *cs = s.c_str();
```

#### 8、数组初始化`vector`：

```c++
int a[] = {0, 1, 2, 3, 4, 5};
vector<int> vec(begin(a), end(a));
```

