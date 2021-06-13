#include "index.h"
template<typename Tcc>
void swaparr(Tcc &a,Tcc&b)
{
	Tcc temp = a;
	a = b;
	b = temp;
}
template<class Jcc>
void rankarr(Jcc arr[],int length)
{
	for (int i=0;i<length;i++)
	{
		int max = i;
		for (int j=i+1;j<length;j++)
		{
			if (arr[max]<arr[j])
			{
				max = j;
			}
		}
		if (max!=i)
		{
			swaparr<Jcc>(arr[max], arr[i]);
		}
	}
}
template <class Ncc>
void printarr(Ncc arr[],int num)
{
	for (int i=0;i<num;i++)
	{
		cout << arr[i];
	}
	cout << endl;
}
int main()
{
	char arrc_c[] = "dcfegab";
	int num0 = sizeof(arrc_c) / sizeof(char);
	printarr<char>(arrc_c, num0);
	rankarr<char>(arrc_c, 7);
	printarr<char>(arrc_c, num0);
	int arrc_i[] = {7,5,2,3,9,8};
	int num1 = sizeof(arrc_i) / sizeof(int);
	printarr<int>(arrc_i, num1);
	rankarr<int>(arrc_i, num1);
	printarr<int>(arrc_i, num1);
	system("pause");
	return 0;
}