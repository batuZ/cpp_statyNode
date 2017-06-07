#include <iostream>
using namespace std;
/*

	-> 引用不是变量，只是变理的别名，没有自己的内存空间，
		与被引用的变量共享空间，使用的是同一个实体

	-> 引用声明后必须同时初始化,初始化以后不可以再改变引用对象，
		只能对引用实体进行操作

	-> 常量（const）不能被直接引用，可用const引用来引用常量，const int& = 常量

	-> 引用的作用域与其引用的变量相同

	-> 能使用引用时，尽量不使用指针

	引用的用法
	1、参数
		作为参数时，可以影响实参的值，使实参改变
		不会占用新的内存空间
		当作参数使用时，引用是在调用函数时过进行声明并初始化

	2、返回值
		可以使函数当作某变量，放在等号左边
		相当于返回一个变量，引用的作用域与变量相同，所以不会返回一个局部变量的引用
		当函数进行返回时初始化引用

*/

//引用作为返回值
int ttt;
int& setDouble()
{
	return ttt;
}

//引用作为参数
void getDouble(int& a, int&b)
{
	a += a;
	b += b;
}
int main()
{

	//引用作为参数
	int x = 9, y = 7;
	getDouble(x, y);
	cout << "x = " << x << ", y = " << y << endl;

	//引用作为返回值
	setDouble() = 55;
	cout << "tt = " << ttt << endl;
	return 0;
}

