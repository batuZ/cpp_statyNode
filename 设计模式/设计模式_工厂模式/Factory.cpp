#include "stdafx.h"
#include "Factory.h"


Factory::Factory()
{
}


Factory::~Factory()
{
}

Product * Factory::CreateProduct(Pro_Type t)
{
	Product* res = NULL;
	if (t == TV_type)
	{
		res = new Tv();
	}
	else if (t == Vedio_type)
	{
		res = new Vedio();
	}
	return res;
}
