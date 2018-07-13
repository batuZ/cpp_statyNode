#pragma once
class Singleton
{
public:

	//��ȡ��������
	static Singleton* getInstance();

	//���ٵ�������
	void Destroy();

	void doSomeThing();

private:
	//�������
	static Singleton *instance;

	//˽�л�Ĭ�Ϻ���
	Singleton();
	~Singleton();
	Singleton(const Singleton&);
	Singleton& operator=(const Singleton&);
};

