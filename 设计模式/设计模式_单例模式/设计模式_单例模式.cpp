// ���ģʽ_����ģʽ.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"Singleton.h"

int main()
{
	//ʹ��
	Singleton::getInstance()->doSomeThing();

	//����
	Singleton::getInstance()->Destroy();

    return 0;
}

