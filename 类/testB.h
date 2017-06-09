#include <iostream>
using namespace std;
#ifndef _TESTB_H_
#define _TESTB_H_

//循环引用时,不引入头文件，而是声明对方是个类，并声明指针变量
//在.cpp中引用头文件，使用真正的对方类定义
class testA;

class testB
{
public: 
	testB();
	testB(char str);
private:
	testA* m_ta;
	char m_myChar;
	int m_s;
	//嵌套类，可以作为外围类的私有底层使用，可以定义是否要对外公开
	class inner
	{
	};
	inner* ff;
};
#endif // !_TESTB_H_
