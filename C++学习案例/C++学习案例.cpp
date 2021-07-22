#include "index.h"

class myclass
{
public:
	bool operator()(const int &a,const int &b)const//函数后加const，代表此函数不能修改类的成员变量
{
	return a>b;
}
};

int main()
{
	set<int,myclass>s;//用仿函数自定义set容器的排序规则为由大到小
	s.insert(11);
	s.insert(20);
	s.insert(33);
	s.insert(9);
	for (set<int,myclass>::iterator i=s.begin();i!=s.end();i++)//遍历set容器
	{
		cout<<*i<<endl;
	}
	return 0;
}