#pragma once
#include"Animal.h"
class Dog : Animal
{
public:
	Dog(int, float);
	~Dog();
	float getHight();
	int getAge();
private:
	float m_hight;
};

