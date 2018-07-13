#include "stdafx.h"
#include "Singleton.h"

//���徲̬��Ա
Singleton* Singleton::instance = NULL;

Singleton * Singleton::getInstance()
{
	//���߳�ʱ��������Ҫ���� 
	if (instance == NULL)
	{
		instance = new Singleton();
	}
	return instance;
}

void Singleton::Destroy()
{
	instance = NULL;
	delete this;
}

void Singleton::doSomeThing()
{
	printf("doSomeThing");
}

Singleton::Singleton()
{
}

Singleton::~Singleton()
{
}
