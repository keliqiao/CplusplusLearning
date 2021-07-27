#include "index.h"
//返回值类型为bool的仿函数为谓词，参数只有一个叫一元谓词，参数两个叫两元谓词
class person
{
public:
	bool operator()(int val)
	{
		return val>5;
	}
};
int main()
{
	vector<int>ve;
	for (int i=0;i<10;i++)
	{
		ve.push_back(i);
	}
	//person（）是一个匿名对象
	vector<int>::iterator it= find_if(ve.begin(),ve.end(),person());//使用用一元谓词,find if返回的是一个迭代器相当于指针
	cout<<*it<<endl;
	return 0;
}