#include "stdafx.h"
#include "Animal.h"


Animal::Animal(int c):m_age(c)
{
}

Animal::~Animal()
{
}

int Animal::getAge()
{
	return m_age;
}
