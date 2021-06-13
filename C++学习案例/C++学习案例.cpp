#include "index.h"
//创建类模板
template <class T1,class T2>
class person
{
public:
	person(T1 tname,T2 tage)
	{
		name = tname;
		age = tage;
	}
	void showperson()
	{
		cout << name << " " << age << endl;
	}
	T1 name;
	T2 age;
};
int main()
{
	//使用类模板
	person<string, int> p1("乔大虾", 19);
	p1.showperson();
	system("pause");
	return 0;
}