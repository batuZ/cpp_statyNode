#include<iostream>
using namespace std;

class Test {
public:
	Test();
	~Test();

	//��ľ�̬��Ա�ͺ���
	static char* str;
	static void say(char * world);
};

//���������
static class onlyOne {
public:
	//get����
	onlyOne* getOnlyOne() {
		if (m_theoOne == NULL)
		{
			m_theoOne = new onlyOne;
		}
		return m_theoOne;
	}
	//�ֶ����ٶ���
	void freeOnlyOne()
	{
		if (m_theoOne != NULL)
			delete m_theoOne;
	}


private:
	//��ֹ�ⲿ�����캯��
	onlyOne();
	//��ֹ�ⲿ��copy���캯��
	onlyOne(const onlyOne& other);
	//���Ψһ������ֶ�
	static onlyOne* m_theoOne;
};

//ȫ�ֶ���ȫ�־�̬�����ѳ�ʼ���ģ����̻��ڳ����У�ռ�����ݶ��ڴ�
Test globleObj;
Test* gloleObjP = new Test;
static Test hig;
//δ������ȫ��
char* name;

int main()
{
	Test zhanObj;	//ջ����,����������������Ӱ�죬���������Զ��ͷ�
	Test* duiObj = new Test; //�Ѷ��󣬱����ֶ��ͷţ�delete duiObj;�������������޹�
	
}


//-------------------------------------------------.cpp
#pragma region .cpp

char* Test::str = "hi";

Test::Test()
{
}

Test::~Test()
{
}

void Test::say(char * world)
{
}
#pragma endregion

