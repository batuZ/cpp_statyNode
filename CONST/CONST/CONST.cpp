// CONST.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

//��cont���峣��������궨��
const int E_NUMBER = 100;



int main()
{
	//const ����һ�����ɱ���
	const int p1 = 12;	// EORRE p1 = 9;



	//����constָ��(ֵ)
	int p2 = 3;
	//const ���M����ֵ������ֵ�ǲ��ɱ��
	const int * p3 = &p2;	// EORRE *p3 = 5;
	int p4 = 4;
	p3 = &p4;				//��p3��ָ��int��ָ�룬�ǿ����ٴθ�ֵָ����ֵ��
	p4 = 9;	



	//����constָ��(��ַ)
	int* const p5 = &p4;
	//EORRE p5 = &p1;		//��ʱconst���ε���p5���ָ���ַ����ַ�����ٸ�ֵ
	*p5 = 90;				//��ָ����ָ��ֵ�ǿ����޸ĵ�
	return 0;
}

