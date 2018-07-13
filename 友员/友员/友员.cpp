// 友员.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Book.h"

// 仅作了解，实际工作中尽量不用，会破坏代码安全性

//Book的全局友员访问类的私有成员
void kk(const Book& book)
{
	cout << book.m_name << endl;
}

int main()
{
    return 0;
}

