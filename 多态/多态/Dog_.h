#pragma once
#include"Animal_.h"
class Dog_ :public Animal_
{
public:
	Dog_();
	~Dog_();
	//��д���ຯ��
	void run()const;

	//����������麯����������д�˺���
	void eat();
};

