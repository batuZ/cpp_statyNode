#include<iostream>
using namespace std;

enum MyEnum
{
	my1 = 101,
	my2 = 102,
	my3 = 103
};
MyEnum aTest = my3;

//ǿö�� �����Ὣö�ٳ�����¶������������У�Ҳ������ʽת��Ϊ���Σ�����ӵ���û�ָ�����ض�����
enum class Options {
	None = 201,
	One = 202,
	All = 203
};
Options o = Options::One;

int main(void) {}