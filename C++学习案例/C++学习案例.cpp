#include "index.h"
#include "vector"
int main()
{
	vector<int>numclass;
	numclass.push_back(13);
	numclass.push_back(23);
	numclass.push_back(45);
	numclass.push_back(32);
	numclass.push_back(67);
	numclass.push_back(52);
	vector<int>::iterator startpoint = numclass.begin();
	vector<int>::iterator endpoint = numclass.end();
	while (startpoint!=endpoint)
	{
		cout << *startpoint << endl;
		startpoint++;
	}
	system("pause");
	return 0;
}