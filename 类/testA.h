#ifndef _TESTA_H_
#define _TESTA_H_

#include "testB.h"

class testA
{
public:
	//����
	char* name;
	static int count;	//����һ����̬��Ա��������Ҫ����

	//����
	testA();
	testA(char ca);					//��������ĳ�ʼ������
	testA(int& a);
	explicit testA(float& b);		//explicit��ֹʹ��ת�����캯��
	testA(int& a, float& b);

	//��Ĭ�Ϻ�����Ҳ������дcopy���캯��
	//ֻ��һ������������ԭ���������
	testA(const testA& other);

	//����
	~testA();

	//����
	int getAge();
	void setAge(int& age);
	//��̬����,
	static bool isOK(int & yes);

private:
	//�ֶ�
	int m_age;
	float m_hight;
	testB m_tb;
};
#endif // !_TESTA_H_