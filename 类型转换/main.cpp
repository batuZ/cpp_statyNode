#include <iostream>
using namespace std;

/*
			类型转换

	const_cast : 移除常量对象的常量性，一般用于指针或引用
		这么做并不是为了修改常量的值，而是为了在调用函数时，
		函数可以接受常量类型的参数
		移除常量性后值虽然可以修改，但不是常量本身的值，而是同一地址的一个临时值。

	static_cast :
		从低到高的安全转换，如 float -> double
		从高到低的强制转换, 如 double -> int
		指针类型转换
		从基类转换为派生类

	reinterpret_cast : 用二进制模式，解释到目标类型
		变量类型改变，值完全不改变，但不能当作目标类型来使用。

	dynamic_cast : 向下的安全类型转换
*/

//void test(int* a);

int main(void) {
	int const co = 55;
	const int* pco = &co;

	//把 const int* 转换为 int*
	//test(const_cast<int*>(pco));

	//类型转换
	float flt = 3.14f;
	int it = static_cast<int>(flt);// int = 3;
}