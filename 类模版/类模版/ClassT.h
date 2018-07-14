#pragma once

	//ÀàÄ£°æ
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

