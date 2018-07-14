#include "stdafx.h"
#include "ClassT.h"



template<class T>
ClassT<T>::ClassT()
{
}

template<class T>
ClassT<T>::~ClassT()
{
}

template<class T>
void ClassT<T>::setValue(T t)
{
	val = t;
}

template<class T>
T ClassT<T>::getValue()
{
	return val;
}
