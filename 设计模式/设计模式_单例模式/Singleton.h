#pragma once
class Singleton
{
public:

	//获取单例对象
	static Singleton* getInstance();

	//销毁单例对象
	void Destroy();

	void doSomeThing();

private:
	//单例句柄
	static Singleton *instance;

	//私有化默认函数
	Singleton();
	~Singleton();
	Singleton(const Singleton&);
	Singleton& operator=(const Singleton&);
};

