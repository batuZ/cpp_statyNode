#include <iostream>
using namespace std;
#ifndef _TESTB_H_
#define _TESTB_H_

//ѭ������ʱ,������ͷ�ļ������������Է��Ǹ��࣬������ָ�����
//��.cpp������ͷ�ļ���ʹ�������ĶԷ��ඨ��
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
	//Ƕ���࣬������Ϊ��Χ���˽�еײ�ʹ�ã����Զ����Ƿ�Ҫ���⹫��
	class inner
	{
	};
	inner* ff;
};
#endif // !_TESTB_H_
