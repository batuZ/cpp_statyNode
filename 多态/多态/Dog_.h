#pragma once
#include"Animal_.h"
class Dog_ :public Animal_
{
public:
	Dog_();
	~Dog_();
	//重写父类函数
	void run()const;

	//父类包含纯虚函数，必须重写此函数
	void eat();
};

