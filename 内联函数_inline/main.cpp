#include <iostream>
using namespace std;

/*
			内联函数 inline

	函数代码体短或功能简单，但又会频繁调用时，使用内联函数
	这样，内联函数中的代码将会在编译时被插入对应的位置，以
	减少函数调用的开销。

	定义内联函数两种方法：
		1、在.m中实现方法时加inline修饰
		2、直接在声明处同时实现方法，不用任何修饰

	必须在调用前声明。
	尽量采用内联函数代替宏定义。
	如果标记inline的函数过大，或包含 for,switch,程序可能不会解释为内联
*/


//调用前声明
int add(int& a, int& b);

int main()
{
	int x = 9, y = 8;
	cout << add(x, y) << endl;
	return 0;
}

inline int add(int& a, int& b)
{
	return a + b;
}