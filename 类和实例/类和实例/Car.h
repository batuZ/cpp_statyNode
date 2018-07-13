#pragma once
#include "stdafx.h"

/*
	默认生成四个函数：
		构造函数					Car();

		析构函数					~Car();

		拷贝构造函数				Car(const Car& other);
		--构造函数只有一个参数，且类型是原对象的引用类型，会把参数中的成员对构造成员一一赋值。

		重载赋值运算符（=）			Car& operator=(Car other);
		--默认的赋值预算符，会用参数调用拷贝构造函数创建一个新的实例，并返回此实例。
*/

class Car
{
public:
	//构造函数
	Car();
	Car(char* name, float value);
	Car(const Car& other);			//	拷贝构造函数

	Car(char* str);					//	当一个构造函数只有一个参数，而且该参数又不是本类的const引用时
									//	这种构造函数称为【转换构造函数】
									//	可以通过参数类型的值强转为当前类的实例,如：
									//	char* str = "string..";
									//	Car c = str;
	explicit Car(float var);		//	还可以用 explicit 阻止转换构造函数，使其变成普通的构造函数。
									//  Car d = 3.14;  => Eorre
									//	尽量避免使用【转换构造函数】

	//析构函数，当成员中有堆对象时，要在这里释放
	~Car();


	//重载运算符
	Car& operator+(Car other);

	//封装
	inline char* getName() { return m_name; }
	inline void setName(char* newName) { m_name = newName; }

	//静态函数
	static int getCount();
private:
	char* m_name;
	float m_number;

	//静态变量
	static int count;	//需要在类外初始化，否则会报错
};

