#include <iostream>
using namespace std;

/*
			�������� inline

	���������������ַ�����
		1����.m��ʵ�ַ���ʱ��inline����
		2��ֱ����������ͬʱʵ�ַ����������κ�����

	����������̻��ܼ򵥣����ֻ�Ƶ������ʱ��ʹ����������
	���������������еĴ��뽫���ڱ���ʱ�������Ӧ��λ�ã���
	���ٺ������õĿ�����

	������inline�ĺ������󣬻���� for,switch,������ܲ������Ϊ����
*/



int add(int& a, int& b);

int main()
{
	int x = 9, y = 8;
	cout << add(x, y) << endl;
	return 0;
}

inline int add(int& a, int& b)
{
	return a + b;
}