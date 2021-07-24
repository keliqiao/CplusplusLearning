#include "index.h"

class person
{
public:
	person(string tname,int tid)
	{
		this->id=tid;
		this->name=tname;
	}
	string name;
	int id;
};

class mapcompare//map容器的自定义排序算法
{
public:
	bool operator()(const person&tp1,const person&tp2)const
	{
		return tp1.id<tp2.id;
	}
};
int main()
{
	person p1("zhangsan",23);
	person p2("lisi",24);
	person p3("wangwu",33);
	map<person,int,mapcompare>mperson;//map容器创建
	mperson.insert(make_pair(p1,294239));//map容器插入数据
	mperson[p2]=235342;
	mperson.insert(pair<person,int>(p3,23433));
	for (map<person,int,mapcompare>::iterator i=mperson.begin();i!=mperson.end();i++)//map容器的输出数据
	{
		cout<<i->first.name<<" "<<i->first.id<<" "<<i->second<<endl;
	}
	return 0;
}