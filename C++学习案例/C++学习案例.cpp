#include "index.h"

class person
{
public:
	char pname[64];
	int page;
};
int main()
{
	fstream tempfiles;
	tempfiles.open("test.txt",ios::in|ios::binary);
	if(!tempfiles.is_open())
	{
		cout<<"文件打开失败"<<endl;
		return 0;
	}
	person pone;
	tempfiles.read((char*)&pone,sizeof(pone));
	cout << pone.pname << pone.page << endl;
	tempfiles.close();
	return 0;
}