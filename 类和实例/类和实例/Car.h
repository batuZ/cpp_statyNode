#pragma once
#include "stdafx.h"

/*
	Ĭ�������ĸ�������
		���캯��					Car();

		��������					~Car();

		�������캯��				Car(const Car& other);
		--���캯��ֻ��һ����������������ԭ������������ͣ���Ѳ����еĳ�Ա�Թ����Աһһ��ֵ��

		���ظ�ֵ�������=��			Car& operator=(Car other);
		--Ĭ�ϵĸ�ֵԤ��������ò������ÿ������캯������һ���µ�ʵ���������ش�ʵ����
*/

class Car
{
public:
	//���캯��
	Car();
	Car(char* name, float value);
	Car(const Car& other);			//	�������캯��

	Car(char* str);					//	��һ�����캯��ֻ��һ�����������Ҹò����ֲ��Ǳ����const����ʱ
									//	���ֹ��캯����Ϊ��ת�����캯����
									//	����ͨ���������͵�ֵǿתΪ��ǰ���ʵ��,�磺
									//	char* str = "string..";
									//	Car c = str;
	explicit Car(float var);		//	�������� explicit ��ֹת�����캯����ʹ������ͨ�Ĺ��캯����
									//  Car d = 3.14;  => Eorre
									//	��������ʹ�á�ת�����캯����

	//��������������Ա���жѶ���ʱ��Ҫ�������ͷ�
	~Car();


	//���������
	Car& operator+(Car other);

	//��װ
	inline char* getName() { return m_name; }
	inline void setName(char* newName) { m_name = newName; }

	//��̬����
	static int getCount();
private:
	char* m_name;
	float m_number;

	//��̬����
	static int count;	//��Ҫ�������ʼ��������ᱨ��
};

