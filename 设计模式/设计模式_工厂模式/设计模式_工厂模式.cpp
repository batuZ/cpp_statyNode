// 设计模式_工厂模式.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Factory.h"
#include "Product.h"
#include "Tv.h"
#include "Vedio.h"

/*
	目标类为继承自Product的子类，Product提供虚函数（接口）
	工厂类通过Product管理Product的子类，需要增加产品时，只需要修改工厂
	所有子类由枚举提供索引
*/

int main()
{
	Factory fac;
	Product* tv = fac.CreateProduct(TV_type);
	Tv * sub = dynamic_cast<Tv *>(tv);	//强转为子类
	sub->startUp();
	sub->shurtDonw();

	Product* vedio = fac.CreateProduct(Vedio_type);
	vedio->startUp();
	vedio->shurtDonw();

	return 0;
}

