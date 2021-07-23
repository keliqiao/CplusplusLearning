#include "index.h"

int main()
{
	map<int,int>m;//创建map容器，插入值的时候会自动按照key进行排序
	m.insert(pair<int,int>(1,123));//用匿名的pair数据给map容器赋值
	m.insert(pair<int,int>(2,343));
	m.insert(pair<int,int>(3,432));
	for (map<int,int>::iterator i=m.begin();i!=m.end();i++)
	{
		cout<<i->first<<" "<<(*i).second<<endl;
	}
	return 0;
}