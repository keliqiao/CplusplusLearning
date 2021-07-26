#include "index.h"
class Worker
{
public:
	string m_Name;
	int m_Salary;
};
void creatvWorker(vector<Worker>&t_vector)
{
	string nameSeed="ABCDEFGHIJ";
	for (int i=0;i<10;i++)
	{
		Worker worker;
		worker.m_Name="员工";
		worker.m_Name+=nameSeed[i];
		worker.m_Salary=rand()%1000+3000;
		t_vector.push_back(worker);
	}
}
void setGroup(vector<Worker>&t_vector,multimap<string,Worker>&t_multimap)
{
	string randstring[3]={"策划","管理","执行"};
	for (vector<Worker>::iterator i=t_vector.begin();i!=t_vector.end();i++)
	{
		//产生部门随机编号
		int deptid=rand()%3;
		string dept=randstring[deptid];
		//将员工插入到map容器中
		t_multimap.insert(make_pair(dept,*i));
	}
}
void showWorker(multimap<string,Worker>&t_multimap)
{
	cout<<"策划部门↓"<<endl;
	cout<<"================="<<endl;
	multimap<string,Worker>::iterator pos=t_multimap.find("策划");
	int countnum=t_multimap.count("策划");//找到策划部门的所有人数
	int index=0;
	for (multimap<string,Worker>::iterator i=pos;i!=t_multimap.end()&&index<countnum;i++,index++)//如果已经找到的人数超过策划部门的所有人数就终止循环
	{
		cout<<"姓名 "<<i->second.m_Name<<" 工资 "<<i->second.m_Salary<<endl;
	}
	cout<<"================="<<endl;
	cout<<"管理部门↓"<<endl;
	cout<<"================="<<endl;
	pos=t_multimap.find("管理");
	countnum=t_multimap.count("管理");//找到管理部门的所有人数
	index=0;
	for (multimap<string,Worker>::iterator i=pos;i!=t_multimap.end()&&index<countnum;i++,index++)//如果已经找到的人数超过策划部门的所有人数就终止循环
	{
		cout<<"姓名 "<<i->second.m_Name<<" 工资 "<<i->second.m_Salary<<endl;
	}
	cout<<"================="<<endl;
	cout<<"执行部门↓"<<endl;
	cout<<"================="<<endl;
	pos=t_multimap.find("执行");
	countnum=t_multimap.count("执行");//找到执行部门的所有人数
	index=0;
	for (multimap<string,Worker>::iterator i=pos;i!=t_multimap.end()&&index<countnum;i++,index++)//如果已经找到的人数超过策划部门的所有人数就终止循环
	{
		cout<<"姓名 "<<i->second.m_Name<<" 工资 "<<i->second.m_Salary<<endl;
	}
	cout<<"================="<<endl;
}
int main()
{
	srand((unsigned int)time(NULL));
	//创建员工
	vector<Worker>vWorker;
	creatvWorker(vWorker);
	//员工分组
	multimap<string,Worker>mWorker;
	setGroup(vWorker,mWorker);
	//显示员工
	showWorker(mWorker);
	return 0;
}