#include "testA.h"
#include "testB.h"

//定义静态成员
int testA::count = 44;;

//初始化子类,只能在参数列表中传参
testA::testA(char ca) :m_tb(ca)
{
}

testA::testA(int& a) : m_age(a), m_tb('g')
{
}
//先初始化一个空的对象，再对成员赋值，两步计算，不推荐
testA::testA(float & b) : m_tb('g')
{
	m_hight = b;
}
//用值初始化对象，效率高
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

