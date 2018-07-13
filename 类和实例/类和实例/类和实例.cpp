// 类和实例.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Car.h"

int main(int c, char* s)
{
	Car a("HONDA", 124);			//实例，在栈上,生命周期受作用域影响，作用域外自动释放
	a.getName();

	Car aa[3] = { "x","y","z" };	//初始化多个实例

	Car* b = new Car("SUZUKI", 555);	//实例指针，在堆上，必须手动释放，与作用域无关
	b->getName();
	delete b;

	Car* bb = new Car[3];			//初始化多个实例指针
	delete[] bb;

	char* str = "benz";
	//Car c = str;					//转换构造函数

	Car d(c);						//拷贝构造

	//调用静态函数
	int count = Car::getCount();
	return 0;
}

