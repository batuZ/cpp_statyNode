// ���ģʽ_����ģʽ.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Factory.h"
#include "Product.h"
#include "Tv.h"
#include "Vedio.h"

/*
	Ŀ����Ϊ�̳���Product�����࣬Product�ṩ�麯�����ӿڣ�
	������ͨ��Product����Product�����࣬��Ҫ���Ӳ�Ʒʱ��ֻ��Ҫ�޸Ĺ���
	����������ö���ṩ����
*/

int main()
{
	Factory fac;
	Product* tv = fac.CreateProduct(TV_type);
	Tv * sub = dynamic_cast<Tv *>(tv);	//ǿתΪ����
	sub->startUp();
	sub->shurtDonw();

	Product* vedio = fac.CreateProduct(Vedio_type);
	vedio->startUp();
	vedio->shurtDonw();

	return 0;
}

