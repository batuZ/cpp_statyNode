#pragma once
class Const_test
{
public:
	Const_test();
	~Const_test();

	//�����const��˵���˺�������Ķ��������ĳ�Ա������ʹ��ӿڸ�����
	inline int getValue() const { return value; }

	//�����const��˵���������ᱻ�޸ģ���ߴ��ΰ�ȫ��
	int myFunc(const int& other);



private:
	//���const��Ա�����ó�ʼ���б�ֵ
	const int value;
};

