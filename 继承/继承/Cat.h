#pragma once
#include"Animal.h"
#include"Action_E.h"

class Cat : public Animal,public Action_E //���ؼ̳�
{
public:
	Cat(int,double);
	~Cat();
	int getColor();

private:
	double m_color;
};

