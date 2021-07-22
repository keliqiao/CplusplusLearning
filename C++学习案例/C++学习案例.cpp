#include "index.h"

class person
{
public:
	person(string tname,int tage)
	{
		this->page=tage;
		this->pname=tname;
	}
	string pname;//姓名
	int page;//年龄
};

class setcom
{
public:
	bool operator()(const person&tpone,const person&tptwo)const//给set容器做一个仿函数，用来给自定义数据类型排序
	{
		return tpone.page>tptwo.page;//仅仅按照年龄排序
	}
};
int main()
{
	person p1("zhangsan",12);
	person p2("lisi",17);
	person p3("wangwu",13);
	person p4("zhaoliu",22);
	set<person,setcom>s;
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	for (set<person,setcom>::iterator i=s.begin();i!=s.end();i++)
	{
		cout<<i->pname<<" "<<i->page<<endl;
	}
	return 0;
}