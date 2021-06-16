#include "index.h"
void printnum(int tvalue)
{
	cout << tvalue << endl;
}
int main()
{
	vector<int>numclass;
	numclass.push_back(13);
	numclass.push_back(23);
	numclass.push_back(45);
	numclass.push_back(32);
	numclass.push_back(67);
	numclass.push_back(52);
	//第一种遍历方法：while法
	vector<int>::iterator startpoint = numclass.begin();
	vector<int>::iterator endpoint = numclass.end();
	while (startpoint!=endpoint)
	{
		cout << *startpoint << endl;
		startpoint++;
	}
	//第二种遍历方法：for法
	for(vector<int>::iterator numpoint=numclass.begin();numpoint!=numclass.end();numpoint++)
	{
		cout << *numpoint << endl;
	}
	//第三种遍历方法：利用STL提供的方法
	for_each(numclass.begin(), numclass.end(), printnum());
	system("pause");
	return 0;
}