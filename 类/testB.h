#ifndef _TESTB_H_
#define _TESTB_H_

//循环引用时,不引入头文件，而是声明对方是个类，并声明指针变量
//在.cpp中引用头文件，使用真正的对方类定义
class testA;

class testB
{
public: 
	testB();
	~testB();
private:
	testA* m_ta;

};
#endif // !_TESTB_H_
