// CLI_Lib.h

#pragma once

using namespace System;

namespace CLI_Lib {

	///��
	public ref class Point
	{
		int x;
		int y;

	public:

		///�������ڶ�дX��Yʵ������
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

		///����ʵ�����캯��
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

		///����ʵ������
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

/*  ��������C++/CLI����
*  https://jingyan.baidu.com/article/acf728fd4af180f8e510a3c1.html
*
*  C++/CLI ʵս�����ռ���������MFC)
*  https://blog.csdn.net/wlanye/article/details/75007543
*
*  ʵ������C++/CLI֮��ƪ
*  https://blog.csdn.net/xieqidong/article/details/2244641
*/