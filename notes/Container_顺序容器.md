## 第九章 顺序容器

#### 1、基本顺序容器：
vector \ deque \ list \ forward_list \ array \ string;

* `string`与`vector`由于其数据在内存中连续存放，因此在向其中间插入元素时需要进行额外的数据移动，效率较低；
* `list`与`forward_list`由于基于链表结构，因此插入数据速度较快，但不支持数据的随机访问（按索引），查找元素时只能通过遍历的方式。此外，为了维护链表的形态，需要的额外元数据也会占用更多内存；

#### 2、迭代器：
`end`又称为尾后迭代器，它默认执行当前容器中最后一个元素的后面；

#### 3、顺序容器的失效：
连续容器指向操作（删除/新增）元素**之前**的迭代器、指针仍然有效；链表容器则全部有效；