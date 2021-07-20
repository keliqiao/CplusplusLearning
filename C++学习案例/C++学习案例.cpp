#include "index.h"

class person
{
public:
	person(string tname,int tage)
	{
		this->age=tage;
		this->name=tname;
	}
	string name;
	int age;
};
int main()
{
	queue<person>qone;
	// 准备数据
	person p1("张三",12);
	person p2("李四",13);
	person p3("王五",14);
	person p4("赵六",15);
	person p5("窦八",16);
	// 入队
	qone.push(p1);
	qone.push(p2);
	qone.push(p3);
	qone.push(p4);
	qone.push(p5);
	//判断队列不为空则查看队头队尾
	cout<<"队列中元素个数"<<qone.size()<<endl;
	while (!qone.empty())
	{
		cout<<"队头元素："<<qone.front().name<<"——"<<qone.front().age<<endl;
		cout<<"队尾元素："<<qone.back().name<<"——"<<qone.back().age<<endl;
		// 出队
		qone.pop();
	}
	cout<<"队列中元素个数"<<qone.size()<<endl;
	return 0;
}