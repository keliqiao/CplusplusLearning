#include "index.h"

class cperson
{
public:
	cperson(string tname,int tage)
	{
		pname=tname;
		page=tage;
	}
	string pname;
	int page;
};
int main()
{
	vector<cperson*>vperson;
	cperson p1("张飞",88);
	cperson p2("张朝阳",23);
	cperson p3("张子健",39);
	vperson.push_back(&p1);
	vperson.push_back(&p2);
	vperson.push_back(&p3);
	for (vector<cperson*>::iterator cppoint=vperson.begin();cppoint !=vperson.end();cppoint++ )
	{
		cout<<(*cppoint)->pname<<(*cppoint)->page<<endl;
	}
	return 0;
}
