// String.cpp : �������̨Ӧ�ó������ڵ㡣
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

