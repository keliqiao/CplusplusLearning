#include "index.h"
int main()
{
	//对组
	pair<string,int>pairvalue("乔大虾",22);//对组创建
	cout<<pairvalue.first<<" "<<pairvalue.second<<endl;//对组的使用
	pair<string,int>pairvalue1=make_pair("乔大虾1",23);//对组的创建
	cout<<pairvalue1.first<<" "<<pairvalue1.second<<endl;//对组的使用
	return 0;
}