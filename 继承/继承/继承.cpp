// �̳�.cpp : �������̨Ӧ�ó������ڵ㡣
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
	c1.run(); //���ؼ̳г�Ա

	Dog d1(4,5.5f);
	// d1.getAge();  // ˽�м̳�ʱ������ʵ������ʹ�ø����Ա
	d1.getHight();
    return 0;
}

