#ifndef _TESTB_H_
#define _TESTB_H_

//ѭ������ʱ,������ͷ�ļ������������Է��Ǹ��࣬������ָ�����
//��.cpp������ͷ�ļ���ʹ�������ĶԷ��ඨ��
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
