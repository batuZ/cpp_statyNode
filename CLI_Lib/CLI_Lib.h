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

/*
CLR创建winForm窗体
1、创建一个CLR控制台应用程序
2、头文件夹右键->添加新建项->UI->Windows窗体
3、main函数增加：
Application::EnableVisualStyles();
Application::Run(gcnew MyForm());
4、本地window调试器


设置不弹出控制台窗口
1、工程->属性->配置属性->链接器->系统->子系统-> [窗口(/SUBSYSTEM:WINDOWS)]
2、工程->属性->配置属性->链接器->高级->入口点-> [main]
*/