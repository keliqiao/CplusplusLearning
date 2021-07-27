#include "index.h"

class person
{
public:
	person()
	{
		this->countunm=0;
	}
	int operator()(int a,int b)//定义函数对象，本质上是重载了
	{
		this->countunm++;
		return a+b;
	}
	int countunm;//函数对象自己记录自己调用的次数
};
int seconduse(person&tpone,int a,int b)
{
	return tpone(a,b);
}
int main()
{
	person pone;//创建普通对象，其实可以当做函数对象
	cout<<pone(123,34)<<endl;//使用函数对象，操作函数对象使用重载的小括号
	cout<<pone(123,34)<<endl;//使用函数对象，操作函数对象使用重载的小括号
	cout<<pone(123,34)<<endl;//使用函数对象，操作函数对象使用重载的小括号
	cout<<seconduse(pone,123,34)<<endl;//使用函数对象作为函数参数
	cout<<"函数对象已经调用了"<<pone.countunm<<"次"<<endl;
	return 0;
}