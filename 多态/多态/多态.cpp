// ��̬.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Cat_.h"
#include "Dog_.h"

//���Դ�������Animal��������ĺ�����ʵ�ֶ�̬
void func(const Animal_& an)
{
	an.run();
}

int main()
{
	//Animal_ Ϊ�����࣬���ܴ���ʵ������
	// EORRE: Animal_ a;

	Cat_ c;
	func(c);

	Dog_ d;
	func(d);

    return 0;
}

