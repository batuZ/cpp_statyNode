#include "testA.h"
#include "testB.h"

//���徲̬��Ա
int testA::count = 44;;

//��ʼ������,ֻ���ڲ����б��д���
testA::testA(char ca) :m_tb(ca)
{
}

testA::testA(int& a) : m_age(a), m_tb('g')
{
}
//�ȳ�ʼ��һ���յĶ����ٶԳ�Ա��ֵ���������㣬���Ƽ�
testA::testA(float & b) : m_tb('g')
{
	m_hight = b;
}
//��ֵ��ʼ������Ч�ʸ�
testA::testA(int & a, float & b) : m_age(a), m_hight(b), m_tb('g')
{
}

testA::testA(const testA & other) : m_age(other.m_age), m_hight(other.m_hight), m_tb(other.m_tb)
{
}

testA::~testA()
{
	cout << "this.delete" << endl;
}

int testA::getAge()
{
	return m_age;
}

void testA::setAge(int & age)
{
	m_age = age;
}

bool testA::isOK(int & yes)
{
	return false;
}

