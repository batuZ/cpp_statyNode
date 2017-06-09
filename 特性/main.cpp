#include<iostream>
using namespace std;

//--->auto 相当于 var
void _auto()
{
	auto i_am_float = 3.4f;
	auto i_am_floatPtr = &i_am_float;
}

//--->nullptr 空指针
//以前都是用0来表示空指针的，但由于0可以被隐式类型转换为整形，这就会存在一些问题。
//关键字nullptr是std::nullptr_t类型的值，用来指代空指针。
//nullptr和任何指针类型以及类成员指针类型的空值之间可以发生隐式类型转换，同样也可以隐式转换为bool型（取值为false）。
//但是不存在到整形的隐式类型转换。
void _nullprt()
{
	char* str = nullptr;
	bool isOk = nullptr;
	//	int s = nullptr;
}

//--->map 字典
//特点是增加和删除节点对迭代器的影响很小，除了那个操作节点，
//对其他的节点都没有什么影响。对于迭代器来说，可以修改实值，而不能修改key。
//自动建立Key － value的对应。key 和 value可以是任意你需要的类型。 
//根据key值快速查找记录，查找的复杂度基本是Log(N)，如果有1000个记录，最多查找10次，1, 000, 000个记录，最多查找20次。
//快速插入Key - Value 记录。快速删除记录.根据Key 修改value记录。
/*
begin()          返回指向map头部的迭代器
clear(）         删除所有元素
count()          返回指定元素出现的次数
empty()          如果map为空则返回true
end()            返回指向map末尾的迭代器
equal_range()    返回特殊条目的迭代器对
erase()          删除一个元素
find()           查找一个元素
get_allocator()  返回map的配置器
insert()         插入元素
key_comp()       返回比较元素key的函数
lower_bound()    返回键值>=给定元素的第一个位置
max_size()       返回可以容纳的最大元素个数
rbegin()         返回一个指向map尾部的逆向迭代器
rend()           返回一个指向map头部的逆向迭代器
size()           返回map中元素的个数
swap()            交换两个map
upper_bound()     返回键值>给定元素的第一个位置
value_comp()      返回比较元素value的函数
*/
#include <map>
typedef map<char*, double> myDic;
void _map()
{
	myDic dic;
	//塞入
	dic["aa"] = 3.14;
	dic["bb"] = 1.414;

	//取出,只有当map中有这个键的实例时才对，否则会自动插入一个实例，值为初始化值。
	//要通过下面的方法判断一下
	double PI = dic["aa"];

	//find
	myDic::iterator i = dic.find("cc");
	if (i == dic.end())//没有
	{
		//则不能取值
	}

	//删除
	dic.clear(); // 全清
	dic.erase("cc"); //通过key清掉指定目标
	dic.erase(i); //通过iterator清掉指定目标
	dic.erase(i, dic.end());//清掉一个区域
}


//---> 虚函数，可以被重写的函数
class B
{
public:
	virtual void f(int) {
		std::cout << "B::f" << std::endl;
	}
};
class D : public B
{
public:
	virtual void f(int) override {			//override 我要重写父类的这个方法
		std::cout << "D::f" << std::endl;
	}
};
class F : public D
{
public:
	virtual void f(int) override final {	//标记为 final 则不能被子类重写
		std::cout << "F::f" << std::endl;
	}
};

//---> Smart Pointers 智能指针 ?????????????????????????????????????? 不可用？
//带引用计数，并且能自动释放内存的智能指针包括以下几种：
//•unique_ptr: 如果内存资源的所有权不需要共享，就应当使用这个（它没有拷贝构造函数），但是它可以转让给另一个unique_ptr（存在move构造函数）。
//•shared_ptr:  如果内存资源需要共享，那么使用这个（所以叫这个名字）。
//•weak_ptr : 持有被shared_ptr所管理对象的引用，但是不会改变引用计数值。
	//它被用来打破依赖循环（想象在一个tree结构中，父节点通过一个共享所有权的引用(chared_ptr)引用子节点，
		//同时子节点又必须持有父节点的引用。如果这第二个引用也共享所有权，就会导致一个循环，最终两个节点内存都无法释放）。


//---> Lambdas 匿名函数	  未完成，参考地址：http://www.cnblogs.com/haippy/archive/2013/05/31/3111560.html
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>

void test() {
	std::vector<int> c{ 1,2,3,4,5,6,7 };
	int x = 5;
	c.erase(std::remove_if(c.begin(), c.end(), [x](int n) { return n < x; }), c.end());

	std::cout << "c: ";
	for (auto i : c) {
		std::cout << i << ' ';
	}
	std::cout << '\n';

	// the type of a closure cannot be named, but can be inferred with auto
	auto func1 = [](int i) { return i + 4; };
	std::cout << "func1: " << func1(6) << '\n';

	// like all callable objects, closures can be captured in std::function
	// (this may incur unnecessary overhead)
	std::function<int(int)> func2 = [](int i) { return i + 4; };
	std::cout << "func2: " << func2(6) << '\n';
}

void main() {
	
}