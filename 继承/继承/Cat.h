#pragma once
#include"Animal.h"
#include"Action_E.h"

class Cat : public Animal,public Action_E //∂‡÷ÿºÃ≥–
{
public:
	Cat(int,double);
	~Cat();
	int getColor();

private:
	double m_color;
};

