#pragma once
#include"Animal_.h"

class Cat_ :public Animal_
{
public:
	Cat_();
	~Cat_();
	//��д���ຯ��
	void run()const;

	//����������麯����������д�˺���
	void eat();
};

