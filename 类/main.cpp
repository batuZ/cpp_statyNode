#include <iostream>
using namespace std;

#include "testA.h"
#include "testB.h"

//ȫ�ֶ���
int age = 3;
float hi = 4.4f;
testA globleObject(hi);

int main(void) {
	int age = 3;
	int ageDef = 99;

	//�����������ջ�ϣ�������ͷţ�˳���봴���෴
	testA ta(::age, ::hi);
	testA tas[3] = { age,age,age };		//ͬʱ��ʼ���������

	//ת������
	testA taConvert = age;				//ת�����죬������ֻ��һ�������Ĺ��캯��,�൱�� testA taConvert(age);
	taConvert = ageDef;					//��ageDef����һ����ʱ����󣬸�ֵ��taConvert���ͷ�

	//��������ָ�룬�ڶ���
	//��̬�����ڴ棬�������Ҫ�ֶ��ͷ�delete��ͬʱ��������
	testA* tap = new testA(age);
	delete tap;
	testA* taps = new testA[3];			//ͬʱ��ʼ���������
	delete[] taps;	

	//�������캯��,��һ�������ʼ����һ���µĶ���
	testA copyA(ta);


	return 0;
}