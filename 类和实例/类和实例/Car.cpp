#include "stdafx.h"
#include "Car.h"

Car::Car() {}
//��ʼ���б�ı�д˳��Ҫ���Ա����������˳����ͬ����ֹ��Ա�����������
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

//ʵ�־�̬����
int Car::getCount()
{
	return Car::count;
}

//��ʼ����̬����
int Car::count = 0;