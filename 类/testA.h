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
	//嵌套类，可以作为外围类的私有底层使用，可以定义是否要对外公开
	class inner
	{
	public:
		int innerAge();
	};
	inner* ff;
};
#endif // !_TESTA_H_