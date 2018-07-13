#pragma once
class Const_test
{
public:
	Const_test();
	~Const_test();

	//这里的const是说明此函数不会改动被操作的成员，可以使类接口更清析
	inline int getValue() const { return value; }

	//这里的const是说明参数不会被修改，提高传参安全性
	int myFunc(const int& other);



private:
	//类的const成员必须用初始化列表赋值
	const int value;
};

