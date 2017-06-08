#include<iostream>
using namespace std;

class Test {
public:
	Test();
	~Test();

	//类的静态成员和函数
	static char* str;
	static void say(char * world);
};

//单例类对象
static class onlyOne {
public:
	//get对象
	onlyOne* getOnlyOne() {
		if (m_theoOne == NULL)
		{
			m_theoOne = new onlyOne;
		}
		return m_theoOne;
	}
	//手动销毁对象
	void freeOnlyOne()
	{
		if (m_theoOne != NULL)
			delete m_theoOne;
	}


private:
	//禁止外部调构造函数
	onlyOne();
	//禁止外部调copy构造函数
	onlyOne(const onlyOne& other);
	//存放唯一对象的字段
	static onlyOne* m_theoOne;
};

//全局对象，全局静态对象，已初始化的，将固化在程序中，占用数据段内存
Test globleObj;
Test* gloleObjP = new Test;
static Test hig;
//未初化的全局
char* name;

int main()
{
	Test zhanObj;	//栈对象,生命周期受作用域影响，作用域外自动释放
	Test* duiObj = new Test; //堆对象，必须手动释放（delete duiObj;），与作用域无关
	
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

