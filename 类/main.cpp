#include <iostream>
using namespace std;

#include "testA.h"
#include "testB.h"

//全局对象
int age = 3;
float hi = 4.4f;
testA globleObject(hi);

int main(void) {
	int age = 3;
	int ageDef = 99;

	//创建类对象，在栈上，出块就释放，顺序与创建相反
	testA ta(::age, ::hi);
	testA tas[3] = { age,age,age };		//同时初始化多个对象

	//转换构造
	testA taConvert = age;				//转换构造，适用于只有一个参数的构造函数,相当于 testA taConvert(age);
	taConvert = ageDef;					//用ageDef创建一个临时类对象，赋值给taConvert后释放

	//创建对象指针，在堆上
	//动态分配内存，这类对象要手动释放delete，同时调用析构
	testA* tap = new testA(age);
	delete tap;
	testA* taps = new testA[3];			//同时初始化多个对象
	delete[] taps;	

	//拷贝构造函数,用一个对象初始化另一个新的对象
	testA copyA(ta);


	return 0;
}