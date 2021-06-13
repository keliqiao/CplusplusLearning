#include "index.h"
template<class t1,class t2>
class person;
template<class t1,class t2>
void showperson(person<t1,t2>ptemp)//类外的全局函数模板
{
	cout << "全局姓名：" << ptemp.name << endl;
	cout << "全局年龄：" << ptemp.age << endl;
}
template<class t1, class t2>
class person
{
	friend void showperson<>(person<t1, t2>ptemp);//声明类外实现的全局函数模板做友元
	
public:
	person(t1 tname, t2 tage);
	void show();
private:
	t1 name;
	t2 age;
};
template<class t1, class t2>
person<t1, t2>::person(t1 tname, t2 tage)
{
	name = tname;
	age = tage;
}
template<class t1, class t2>
void person<t1, t2>::show()
{
	cout << "名字：" << name << endl;
	cout << "年龄：" << age << endl;
}
