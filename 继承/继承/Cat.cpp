#include "stdafx.h"
#include "Cat.h"


Cat::Cat(int a, double c)
	:Animal(a),m_color(c)
{
}


Cat::~Cat()
{
}

int Cat::getColor()
{
	return m_color;
}
