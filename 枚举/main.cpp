#include<iostream>
using namespace std;

enum MyEnum
{
	my1 = 101,
	my2 = 102,
	my3 = 103
};
MyEnum aTest = my3;

//强枚举 ，不会将枚举常量暴露到外层作用域中，也不会隐式转换为整形，并且拥有用户指定的特定类型
enum class Options {
	None = 201,
	One = 202,
	All = 203
};
Options o = Options::One;

int main(void) {}