#ifndef _TESTA_H_
#define _TESTA_H_

#include "testB.h"

class testA
{
public:
	testA();
	~testA();


private:
	testB m_tb;
	//Ƕ���࣬������Ϊ��Χ���˽�еײ�ʹ�ã����Զ����Ƿ�Ҫ���⹫��
	class inner
	{
	public:
		int innerAge();
	};
	inner* ff;
};
#endif // !_TESTA_H_