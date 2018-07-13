#pragma once
class Product
{
public:
	Product();
	virtual ~Product();
	virtual void startUp() = 0;
	virtual void shurtDonw() = 0;
};

