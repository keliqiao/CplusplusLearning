#include "index.h"
#include "template.hpp"

int main()
{
	person<string, int>pone("乔大虾", 20);
	pone.show();
	showperson(pone);
	system("pause");
	return 0;
}