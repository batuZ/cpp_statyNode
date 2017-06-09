#include<iostream>
#include<list>
#include<vector>
using namespace std;


/*
Lists将元素按顺序储存在链表中. 与 向量(vectors)相比, 它允许快速的插入和删除，但是随机访问却比较慢.

assign()		给list赋值 
back()			返回最后一个元素 
begin()			返回指向第一个元素的迭代器 
clear()			删除所有元素 
empty()			如果list是空的则返回true 
end()			返回末尾的迭代器 
erase()			删除一个元素 
front()			返回第一个元素 
get_allocator() 返回list的配置器 
insert()		插入一个元素到list中 
max_size()		返回list能容纳的最大元素数量 
merge()			合并两个list 
pop_back()		删除最后一个元素 
pop_front()		删除第一个元素 
push_back()		在list的末尾添加一个元素 
push_front()	在list的头部添加一个元素 
rbegin()		返回指向第一个元素的逆向迭代器 
remove()		从list删除元素 
remove_if()		按指定条件删除元素 
rend()			指向list末尾的逆向迭代器 
resize()		改变list的大小 
reverse()		把list的元素倒转 
size()			返回list中的元素个数 
sort()			给list排序 
splice()		合并两个list 
swap()			交换两个list 
unique()		删除list中重复的元素
*/
typedef list<double> MyList;
void testList() {
	//初始化一个list
	MyList aList1;						//空表
	MyList aList2(4, 5.6);				//4个5.6
	MyList aList3{ 1.2,3.4,5.6,7.8 };	//用内容初始化

	//操作list
	aList1.assign({ 3.3, 4.4, 5.5 });		//给表重新赋值
	aList1.push_back(5.5);					//塞到表后面
	aList3.push_front(2.2);					//塞表前面
	aList3.insert(aList3.begin(), 6.66);	//在第5个成员后面塞个6.66
	aList3.pop_back();					//干掉后面一个
	aList3.pop_front();					//干掉第一个
	aList3.erase(++aList3.begin());		//干掉前面第3个
	aList1.size();						//成员数

	//声明i为迭代器   
	MyList::iterator i;					//正向迭代器 ++为下一个成员
	MyList::reverse_iterator rev_i;		//反向 ++为上一个成员
	//i是指向成员的指针
	for (MyList::iterator itm = aList3.begin(); itm != aList3.end(); ++itm)
	{
		cout << *itm << endl;
	}
}

/*
相当于自动大小的float[]

1.push_back   在数组的最后添加一个数据
2.pop_back    去掉数组的最后一个数据 
3.at          得到编号位置的数据
4.begin       得到数组头的指针
5.end         得到数组的最后一个单元+1的指针
6.front       得到数组头的引用
7.back        得到数组的最后一个单元的引用
8.max_size    得到vector最大可以是多大
9.capacity    当前vector分配的大小
10.size       当前使用数据的大小
11.resize     改变当前使用数据的大小，如果它比当前使用的大，者填充默认值
12.reserve    改变当前vecotr所分配空间的大小
13.erase      删除指针指向的数据项
14.clear      清空当前的vector
15.rbegin     将vector反转后的开始指针返回(其实就是原来的end-1)
16.rend       将vector反转构的结束指针返回(其实就是原来的begin-1)
17.empty      判断vector是否为空
18.swap       与另一个vector交换数据
*/
typedef vector<float> MyVec;
void testVector() {
	MyVec c{ 3.2f,4.3f,5.4f };
	c.clear();						//移除容器中所有数据。
	c.empty();						//判断容器是否为空。
	c.erase(c.end());				// 删除pos位置的数据
	c.erase(c.begin(), c.end ());	//删除[beg, end)区间的数据
	c.front();						//传回第一个数据。
	c.insert(c.begin(), 3.1f);		//在pos位置插入一个elem拷贝
	c.pop_back();					//删除最后一个数据。
	c.push_back(7.7f);				//在尾部加入一个数据。
	c.resize(77);					//重新设置该容器的大小
									//使用reserve()函数提前设定容量大小，避免多次容量扩充操作导致效率低下。
	c.size();						//回容器中实际数据的个数。
	c.begin();						//返回指向容器第一个元素的迭代器
	c.end();						//返回指向容器最后一个元素的迭代器

	c.at(6);						//传回索引idx所指的数据，如果idx越界，抛出out_of_range。
	c.back();						// 传回最后一个数据，不检查这个数据是否存在。
	c.front();						// 传回地一个数据。
	c.get_allocator();				// 使用构造函数返回一个拷贝。
	c.rbegin();						// 传回一个逆向队列的第一个数据。
	c.rend();						//传回一个逆向队列的最后一个数据的下一个位置。
	c.~vector();					// 销毁所有数据，释放内存。   
	c[3] = 44.44f;
}
int main(void) {
	testList();
	return 0;
}

/*
  1、如果你需要高效的随即存取，而不在乎插入和删除的效率，使用vector
		vector<int>::iterator支持“+”，“+=”，“<”，“++”等操作符。
    2、如果你需要大量的插入和删除，而不关心随即存取，则应使用list
		list<int>::iterator支持“++”。
	  3、如果你需要随即存取，而且关心两端数据的插入和删除，则应使用deque。
*/