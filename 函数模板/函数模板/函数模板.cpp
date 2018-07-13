// 函数模板.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


 template<typename T> T sum(const T a, const T b) {
	return a + b;
}

int main()
{
	int s = 4, t = 9;
	cout << sum(s,t) << endl;

	double c = 8.9, j = 7.87;
	cout << sum(c,j) << endl;

	return 0;
}

