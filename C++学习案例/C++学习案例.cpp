#include "index.h"

class person
{
public:
	person(string tname,int tage)
	{
		this->name=tname;
		this->age=tage;
	}
	bool operator==(const person&t_person)//重载==运算符，用于自定义数据类型的比较，不然编译器并不会比较
	{
		if (t_person.name==this->name&&t_person.age==this->age)
		{
			return true;
		}
		return false;
	}
	string name;
	int age;
};
int main()
{
	vector<person>v1;
	v1.push_back(person("hello",23));
	v1.push_back(person("hedfo",212));
	v1.push_back(person("hesfllo",22));
	v1.push_back(person("hesdllo",223));
	v1.push_back(person("hsfllo",233));
	v1.push_back(person("hafo",2313));
	person p1("hello",22);
	vector<person>::iterator i= find(v1.begin(),v1.end(),p1);//内部需要用到==进行比较，所以需要在类中重载==
	if (i!=v1.end())
	{
		cout<<i->name<<" "<<i->age<<endl;
	}else
	{
		cout<<"没有找到"<<endl;
	}
	return 0;
}