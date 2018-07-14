#pragma once
#include<map>
template<typename Key,typename Value>
class Dic
{
public:
	Dic();
	~Dic();

	void Add(Key, Value);
	bool Remove(Key);
	Value& getValueByKey(const Key& key);
	Key* getKeyByValue(const Value& value);

private:
	map<Key, Value> *m_dic;
};


