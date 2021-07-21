#include "index.h"

class Person
{
public:
	Person(string tname,int tage,int theight)
	{
		this->age=tage;
		this->height=theight;
		this->name=tname;
	}
	string name;
	int age;
	int height;
};
//指定sort的排序规则
bool sortfunction(Person&p1,Person&p2)
{
	if (p1.age==p2.age)//年龄相同按照身高排序
	{
		return p1.height>p2.height;
	}
	return p1.age<p2.age;//年龄不同按照年龄排序
}
int main()
{
	list<Person>list1;//创建容器
	Person p1("刘备", 35 , 175);//准备数据
	Person p2("曹操", 45 , 180);
	Person p3("孙权", 40 , 170);
	Person p4("赵云", 25 , 190);
	Person p5("张飞", 35 , 160);
	Person p6("关羽", 35 , 200);
	list1.push_back(p1);
	list1.push_back(p2);
	list1.push_back(p3);
	list1.push_back(p4);
	list1.push_back(p5);
	list1.push_back(p6);
	for (list<Person>::iterator i=list1.begin();i!=list1.end();i++)
	{
		cout<<i->name<<" "<<(*i).age<<" "<<i->height<<endl;
	}
	//排序
	cout<<"排序后"<<endl;
	list1.sort(sortfunction);
	for (list<Person>::iterator i=list1.begin();i!=list1.end();i++)
	{
		cout<<i->name<<" "<<(*i).age<<" "<<i->height<<endl;
	}
	return 0;
}