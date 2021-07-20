#include "index.h"
//选手类
class person
{
public:
	person(string tpname,int tpscore)
	{
		pname=tpname;
		pscore=tpscore;
	}
	string pname;//选手姓名
	int pscore;//选手分数
};
void creatperson(vector<person>& tempv)
{
	string nameseed="abcde";
	int score=0;
	for (int i=0;i<5;i++)
	{
		string name="张";
		name+=nameseed[i];
		score=0;
		person p(name,score);
		tempv.push_back(p);
	}
}
void setscores(vector<person>&t_vector)
{//设置从容器开始到结束的次数循环
	for (vector<person>::iterator i=t_vector.begin();i!=t_vector.end();i++)
	{
		//评委打分
		deque<int>teascore;
		for (int j=0;j<10;j++)
		{
			int tscore=rand()%40+60;
			teascore.push_back(tscore);
		}
		//排序
		sort(teascore.begin(),teascore.end());
		//去掉头部和尾部最大和最小值
		teascore.pop_back();
		teascore.pop_front();
		int sum=0;
		for(deque<int>::iterator x=teascore.begin();x!=teascore.end();x++)
		{
			sum+=*x;
		}
		sum/=teascore.size();
		i->pscore=sum;
		
	}
}
void show(vector<person>&t_vector)
{
	for (vector<person>::iterator i=t_vector.begin();i!=t_vector.end();i++)
	{
		cout<<i->pname<<"："<<i->pscore<<endl;
	}
}
int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	//创建5名选手,并且给每位选手赋予初值
	vector<person>v;
	creatperson(v);
	//给每位选手打分
	setscores(v);
	//显示每位选手得分
	show(v);
	
}