#include "stdafx.h"
#include "Dog.h"


Dog::Dog(int a, float f)
	:Animal(a),m_hight(f)
{
}


Dog::~Dog()
{
}

float Dog::getHight()
{
	return m_hight;
}

int Dog::getAge()
{
	return m_age;
}
