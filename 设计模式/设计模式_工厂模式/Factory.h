#pragma once
#include "Product.h"
#include"Tv.h"
#include"Vedio.h"

enum Pro_Type{
	TV_type,
	Vedio_type
};

class Factory
{
public:
	Factory();
	~Factory();
	Product * CreateProduct(Pro_Type);
};

