#include "index.h"
//二元谓词
class eryuanweici
{
public:
	bool operator()(int val1,int val2)//创建二元谓词
	{
		return val1<val2;
	}
};
int main()
{
	vector<int>ve;
	ve.push_back(120);
	ve.push_back(130);
	ve.push_back(30);
	ve.push_back(320);
	ve.push_back(90);
	sort(ve.begin(),ve.end(),eryuanweici());//使用二元谓词
	for (vector<int>::iterator it=ve.begin();it!=ve.end();it++)
	{
		cout<<*it<<endl;
	}
	return 0;
}