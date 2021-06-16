#include "index.h"
int main()
{
	vector<vector<int>>maxv;
	vector<int>minv1;
	vector<int>minv2;
	vector<int>minv3;
	vector<int>minv4;
	vector<int>minv5;
	for (int i=0;i<10;i++)
	{
		minv1.push_back(rand()%100);
		minv2.push_back(rand()%100);
		minv3.push_back(rand()%100);
		minv4.push_back(rand()%100);
		minv5.push_back(rand()%100);
	}
	maxv.push_back(minv1);
	maxv.push_back(minv2);
	maxv.push_back(minv3);
	maxv.push_back(minv4);
	maxv.push_back(minv5);
	for (vector<vector<int>>::iterator maxit=maxv.begin();maxit!=maxv.end();maxit++)
	{
		for (vector<int>::iterator minit=maxit->begin();minit!=maxit->end();minit++)
		{
			cout<<*minit<<" ";
		}
		cout<<endl;
	}
	return 0;
}