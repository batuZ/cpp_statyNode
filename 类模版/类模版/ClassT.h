#pragma once

	//��ģ��
	template<class T>
	class ClassT
	{
	public:
		ClassT();
		~ClassT();

		void setValue(T);
		T getValue();

	private:
		T val;
	};

