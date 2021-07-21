#include "index.h"
void printlist1(const list<int>&tl)
{
	for (list<int >::const_iterator i=tl.begin();i!=tl.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
}

int main()
{
	// 创建list链表
	list<int>l;
	// 添加数据
	l.push_back(23);
	l.push_back(22);
	l.push_back(24);
	l.push_back(26);
	//遍历容器
	printlist1(l);
	//区间构造
	list<int>l1(l.begin(),l.end());
	//拷贝构造
	list<int>l2(l);
	//n个elem
	list<int>l3(10,223);
	//赋值
	list<int>l4;
	l4=l;
	list<int>l5;
	l5.assign(l.begin(),l.end());
	list<int>l6;
	l6.assign(10,334);
	//交换数据
	cout<<"交换前"<<endl;
	printlist1(l6);
	printlist1(l);
	l6.swap(l);
	cout<<"交换后"<<endl;
	printlist1(l6);
	printlist1(l);
	return 0;
}