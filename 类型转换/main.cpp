#include <iostream>
using namespace std;

/*
			����ת��

	const_cast : �Ƴ���������ĳ����ԣ�һ������ָ�������
		��ô��������Ϊ���޸ĳ�����ֵ������Ϊ���ڵ��ú���ʱ��
		�������Խ��ܳ������͵Ĳ���
		�Ƴ������Ժ�ֵ��Ȼ�����޸ģ������ǳ��������ֵ������ͬһ��ַ��һ����ʱֵ��

	static_cast :
		�ӵ͵��ߵİ�ȫת������ float -> double
		�Ӹߵ��͵�ǿ��ת��, �� double -> int
		ָ������ת��
		�ӻ���ת��Ϊ������

	reinterpret_cast : �ö�����ģʽ�����͵�Ŀ������
		�������͸ı䣬ֵ��ȫ���ı䣬�����ܵ���Ŀ��������ʹ�á�

	dynamic_cast : ���µİ�ȫ����ת��
*/

//void test(int* a);

int main(void) {
	int const co = 55;
	const int* pco = &co;

	//�� const int* ת��Ϊ int*
	//test(const_cast<int*>(pco));

	//����ת��
	float flt = 3.14f;
	int it = static_cast<int>(flt);// int = 3;
}