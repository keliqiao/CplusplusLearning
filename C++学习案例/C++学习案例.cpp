#include "index.h"
template<class t1,class t2>
class person
{
public:
	person(t1 tname, t2 tage);
	void show();
	t1 name;
	t2 age;
};
template<class t1,class t2>
person<t1,t2>::person(t1 tname,t2 tage)
{
	name = tname;
	age = tage;
}
template<class t1,class t2>
void person<t1,t2>::show()
{
	cout << "名字：" << name << endl;
	cout << "年龄：" << age << endl;
}

int main()
{
	person<string, int>pone("乔大虾", 20);
	pone.show();
	system("pause");
	return 0;
}