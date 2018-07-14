#include "stdafx.h"
#include "Dic.h"

template<typename Key, typename Value>
Dic<Key, Value>::Dic()
{
	m_dic = new map<Key, Value>();
}

template<typename Key, typename Value>
Dic<Key, Value>::~Dic()
{
	delete m_dic;
}

template<typename Key, typename Value>
void Dic<Key, Value>::Add(Key k, Value v)
{
	m_dic->insert(pair<Key, Value>(k, v))
}

template<typename Key, typename Value>
bool Dic<Key, Value>::Remove(Key k)
{
	return m_dic->erase(k) == 1;
}

template<typename Key, typename Value>
Value & Dic<Key, Value>::getValueByKey(const Key & key)
{
	return m_dic[key];
}

template<typename Key, typename Value>
Key * Dic<Key, Value>::getKeyByValue(const Value & value)
{
	map<Key,Value>::iterator it;
	it = m_dic.begin();

	return nullptr;
}
