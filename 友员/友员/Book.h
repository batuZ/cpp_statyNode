#pragma once
#include	"ManagerT.h";
#include	"ManagerE.h"

class Book
{
public:
	Book();
	~Book();
	friend class ManagerT;							//友员类
	friend void ManagerE::WatchBook();				//友员函数
	friend void kk(const Book&);					//友员全局函数
private:
	char* m_name;
	int m_pages;
};

