// ���ʵ��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Car.h"

int main(int c, char* s)
{
	Car a("HONDA", 124);			//ʵ������ջ��,����������������Ӱ�죬���������Զ��ͷ�
	a.getName();

	Car aa[3] = { "x","y","z" };	//��ʼ�����ʵ��

	Car* b = new Car("SUZUKI", 555);	//ʵ��ָ�룬�ڶ��ϣ������ֶ��ͷţ����������޹�
	b->getName();
	delete b;

	Car* bb = new Car[3];			//��ʼ�����ʵ��ָ��
	delete[] bb;

	char* str = "benz";
	//Car c = str;					//ת�����캯��

	Car d(c);						//��������

	//���þ�̬����
	int count = Car::getCount();
	return 0;
}

