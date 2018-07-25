## 第八章 IO类

###1、几种常用IO类：

- iostream 读写流的基本类型；
- fstream 命名文件类型;
- sstream 内存String对象类型;

ifstream / istringstream -> istream

ofstream / ostringstream -> ostream



### 2、IO对象无拷贝或赋值：

> 由于不能拷贝IO对象，因此也不能将形参或返回类型设置为流类型。进行IO操作的函数通常以引用方式传递或返回流。读写一个IO对象会改变其状态，因此传递和返回的引用不能是const的。



###3、刷新输出缓冲区：

* flush 刷新缓冲区，但不输出任何额外字符；
* ends 向缓冲区插入一个空字符，然后刷新缓冲区；



### 4、文件输入输出：

* ifstream；
* ofstream；
* istringstream；
* ostringstream；
* stringstream；



