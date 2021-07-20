#include "index.h"
int main()
{
	//栈
	stack<int>s;
	//入栈
	s.push(10);
	s.push(23);
	s.push(22);
	//判断栈为空则出栈
	while (!s.empty())
	{
		//查看栈顶的元素
		cout<<"栈顶元素为"<<s.top()<<endl;
		//出栈
		s.pop();
	}
	cout<<s.size()<<endl;
	return 0;
}