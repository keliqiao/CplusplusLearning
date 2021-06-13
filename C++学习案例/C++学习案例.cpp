#include "index.h"

class person
{
public:
	string name;
	int age;
	person(string tname,int tage)
	{
		name = tname;
		age = tage;
	}
};
template <class T>
void comparevalue(T temp1,T temp2)
{
	if (temp1==temp2)
	{
		cout << "相等" << endl;
	}else
	{
		cout << "不相等" << endl;
	}
}
//由于上面的模板不能比较自定义类型person，所以特意将person类型定义好模板
template<> void comparevalue(person p1,person p2)
{
	if (p1.age==p2.age&&p1.name==p2.name)
	{
		cout << "同一个人" << endl;
	}else
	{
		cout << "不是同一个人" << endl;
	}
}
int main()
{
	int a = 10;
	int b = 20;
	comparevalue(a, b);
	person p1("可", 23);
	person p2("可", 23);
	comparevalue(p1, p2);
	system("pause");
	return 0;
}