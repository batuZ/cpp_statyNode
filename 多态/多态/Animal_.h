#pragma once
class Animal_
{
public:
	Animal_();

	//作为基类时，析构函数要设置为虚函数，否则子类不能重写析构函数
	virtual ~Animal_();

	//设置为虚函数，否则子类不能重写此函数
	virtual	void run() const;

	//纯虚函数，没有实现部份，继承此类的子类，必须重写此函数
	//带有纯虚函数的类是抽象类，不能实例化
	//C++通过纯虚函数实现接口功能
	virtual void eat() = 0;

};

