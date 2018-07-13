// String.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

string* getStr()
{
	string *t = new string("aaa");
	return t;
}


int main()
{
	string str1{ "aaa" };
	string* str2 = getStr();
	cout << str2 << endl;
	return 0;
}

