// CLI_Lib.h

#pragma once

using namespace System;

namespace CLI_Lib {

	///类
	public ref class Point
	{
		int x;
		int y;

	public:

		///定义用于读写X与Y实例属性
		property int X
		{

			int get() { return x; }
			void set(int val) { x = val; }
		}
		property int Y
		{
			int get() { return y; }
			void set(int val) { y = val; }
		}

		///定义实例构造函数
		Point()
		{
			X = 0;
			Y = 0;
		}
		Point(int xor, int yor)
		{
			X = xor;
			Y = yor;
		}

		///定义实例方法
		void Move(int xor, int yor)
		{
			X = xor;
			Y = yor;
		}

		virtual bool Equals(Object^ obj) override
		{
			if (obj == nullptr)
			{
				return false;
			}
			if (this == obj) 
			{
				return true;
			}
			if (GetType() == obj->GetType())
			{
				Point^ p = static_cast<Point^>(obj);
				return (X == p->X) && (Y == p->Y);
			}
			return false;
		}

		virtual int GetHashCode() override
		{
			return X ^ (Y << 1);
		}

		virtual String^ ToString() override
		{
			return String::Concat("(", X, ",", Y, ")");
		}
	};
}

/*  怎样创建C++/CLI程序
*  https://jingyan.baidu.com/article/acf728fd4af180f8e510a3c1.html
*
*  C++/CLI 实战技术收集（我讨厌MFC)
*  https://blog.csdn.net/wlanye/article/details/75007543
*
*  实例解析C++/CLI之开篇
*  https://blog.csdn.net/xieqidong/article/details/2244641
*/