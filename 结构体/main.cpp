#include <iostream>
using namespace std;

struct MyStruct
{
	int hour;
	int min;
	int sec;
	//�Զ����ʼ������
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

	//ʹ���Զ����ʼ������
		
		MyStruct* ms = new MyStruct();
		ms->init(3, 4, 5);
		ms->display();
		
	//ʹ��Ĭ�ϳ�ʼ�����������θ�ֵ
		
		MyStruct ts = { 6,7,8 };
		ts.display();
}