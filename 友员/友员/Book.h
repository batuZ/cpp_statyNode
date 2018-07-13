#pragma once
#include	"ManagerT.h";
#include	"ManagerE.h"

class Book
{
public:
	Book();
	~Book();
	friend class ManagerT;							//��Ա��
	friend void ManagerE::WatchBook();				//��Ա����
	friend void kk(const Book&);					//��Աȫ�ֺ���
private:
	char* m_name;
	int m_pages;
};

