#include "stdafx.h"
#include "Singleton.h"

//定义静态成员
Singleton* Singleton::instance = NULL;

Singleton * Singleton::getInstance()
{
	//多线程时，这里需要加锁 
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
