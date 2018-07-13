// 多态.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Cat_.h"
#include "Dog_.h"

//可以处理所有Animal和其子类的函数，实现多态
void func(const Animal_& an)
{
	an.run();
}

int main()
{
	//Animal_ 为抽象类，不能创建实例对象
	// EORRE: Animal_ a;

	Cat_ c;
	func(c);

	Dog_ d;
	func(d);

    return 0;
}

