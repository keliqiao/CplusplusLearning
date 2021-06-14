#include "index.h"
#include "template.hpp"

class person
{
public:
	person(){}
	person(string tname,int tage)
	{
		name = tname;
		age = tage;
	}
	string name;
	int age;
};
void printvalue(Arrayclass<person>tarrayclass)
{
	for (int i=0;i<tarrayclass.size;i++)
	{
		cout << tarrayclass[i].name<<" "<<tarrayclass[i].age<< endl;
	}
}
void temp()
{
	Arrayclass<person>pone(6);
	person p1("张三", 12);
	person p2("李四", 34);
	person p3("王五", 24);
	person p4("赵六", 22);
	person p5("谯七", 53);
	pone.endinsert(p1);
	pone.endinsert(p2);
	pone.endinsert(p3);
	pone.endinsert(p4);
	pone.endinsert(p5);

	printvalue(pone);
}
int main()
{
	temp();
	system("pause");
	return 0;
}