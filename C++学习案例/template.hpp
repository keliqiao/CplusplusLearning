#include "index.h"
template<class t1,class t2>
class person;
template<class t1,class t2>
void showperson(person<t1,t2>ptemp)//�����ȫ�ֺ���ģ��
{
	cout << "ȫ��������" << ptemp.name << endl;
	cout << "ȫ�����䣺" << ptemp.age << endl;
}
template<class t1, class t2>
class person
{
	friend void showperson<>(person<t1, t2>ptemp);//��������ʵ�ֵ�ȫ�ֺ���ģ������Ԫ
	
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
	cout << "���֣�" << name << endl;
	cout << "���䣺" << age << endl;
}
