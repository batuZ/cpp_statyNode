// CONST.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

//用cont定义常量，代替宏定义
const int E_NUMBER = 100;



int main()
{
	//const 定义一个不可变量
	const int p1 = 12;	// EORRE p1 = 9;



	//定义const指针(值)
	int p2 = 3;
	//const 修鉓的是值，所以值是不可变的
	const int * p3 = &p2;	// EORRE *p3 = 5;
	int p4 = 4;
	p3 = &p4;				//但p3是指向int的指针，是可以再次赋值指向别的值的
	p4 = 9;	



	//定义const指针(地址)
	int* const p5 = &p4;
	//EORRE p5 = &p1;		//此时const修饰的是p5这个指针地址，地址不能再赋值
	*p5 = 90;				//但指针所指的值是可以修改的
	return 0;
}

