#include "index.h"
int main()
{
	set<int>setvessel;
	pair<set<int>::iterator,bool>returnvalue=setvessel.insert(10);
	if (returnvalue.second)
	{
		cout<<"插入成功"<<endl;
	}else
	{
		cout<<"插入失败"<<endl;
	}
	returnvalue=setvessel.insert(10);
	if (returnvalue.second)
	{
		cout<<"插入成功"<<endl;
	}else
	{
		cout<<"插入失败"<<endl;
	}
	return 0;
}