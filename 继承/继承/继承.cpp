// 继承.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"Animal.h"
#include"Cat.h"
#include"Dog.h"

int main()
{
	Cat c1(2,3.1);
	c1.getAge();
	c1.getColor();
	c1.run(); //多重继承成员

	Dog d1(4,5.5f);
	// d1.getAge();  // 私有继承时，子类实例不能使用父类成员
	d1.getHight();
    return 0;
}

