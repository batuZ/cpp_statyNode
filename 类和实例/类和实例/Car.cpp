#include "stdafx.h"
#include "Car.h"

Car::Car() {}
//初始化列表的编写顺序要与成员变量的声明顺序相同，防止成员间的依赖错误
Car::Car(char * name, float value) :m_name(name), m_number(value) {}

Car::Car(const Car & other) {}

Car::Car(char * str) : m_name(str), m_number(0) {}

Car::Car(float var) : m_name(nullptr), m_number(var) {}

Car::~Car()
{
	cout << "this.delete" << endl;
}

Car & Car::operator+(Car other)
{
	Car * temp = new Car(this->m_name, this->m_number + other.m_number);
	return  *temp;
}

//实现静态函数
int Car::getCount()
{
	return Car::count;
}

//初始化静态变量
int Car::count = 0;