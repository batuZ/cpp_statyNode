#ifndef _TESTA_H_
#define _TESTA_H_

#include "testB.h"

class testA
{
public:
	//属性
	char* name;
	static int count;	//声明一个静态成员，定义在要类外

	//构造
	testA();
	testA(char ca);					//传个子类的初始化参数
	testA(int& a);
	explicit testA(float& b);		//explicit组止使用转换构造函数
	testA(int& a, float& b);

	//有默认函数，也可以重写copy构造函数
	//只有一个参数，就是原对象的引用
	testA(const testA& other);

	//析构
	~testA();

	//方法
	int getAge();
	void setAge(int& age);
	//静态方法,
	static bool isOK(int & yes);

private:
	//字段
	int m_age;
	float m_hight;
	testB m_tb;
};
#endif // !_TESTA_H_