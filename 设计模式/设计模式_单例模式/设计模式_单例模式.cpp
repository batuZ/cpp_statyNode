// 设计模式_单例模式.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"Singleton.h"

int main()
{
	//使用
	Singleton::getInstance()->doSomeThing();

	//销毁
	Singleton::getInstance()->Destroy();

    return 0;
}

