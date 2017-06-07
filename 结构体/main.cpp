#include <iostream>
using namespace std;

struct MyStruct
{
	int hour;
	int min;
	int sec;
	//自定义初始化方法
	void init(int h, int m, int s)
	{
		hour = h;
		min = m;
		sec = s;
	}
	void display()
	{
		cout << hour << min << sec << endl;
	}
};

int main(void) {

	//使用自定义初始化方法
		
		MyStruct* ms = new MyStruct();
		ms->init(3, 4, 5);
		ms->display();
		
	//使用默认初始化方法，依次赋值
		
		MyStruct ts = { 6,7,8 };
		ts.display();
}