#include "index.h"
template <class T>
class Arrayclass
{
public:
Arrayclass(int tcapacity)
	{
		cout << "���й��캯��" << endl;
		capacity = tcapacity;
		size = 0;
		point = new T[tcapacity];
	}
Arrayclass(const Arrayclass&tarrayclass)
{
	cout << "�������캯��" << endl;
	capacity = tarrayclass.capacity;
	size = tarrayclass.size;
	point = new T[tarrayclass.capacity];
	for (int i=0;i<tarrayclass.capacity;i++)
	{
		point[i]= tarrayclass.point[i];
	}
}
~Arrayclass()
	{
		cout << "������������" << endl;
		if (point!=NULL)
		{
			delete[] point;
			point = NULL;
		}
	}
Arrayclass& operator=(Arrayclass&tarrayclass)
{
	cout << "����operator=����" << endl;
	if (point!=NULL)
	{
		delete[] point;
		point = NULL;
		capacity = 0;
		size = 0;
	}
	point = new T[tarrayclass.capacity];
	capacity = tarrayclass.capacity;
	size = tarrayclass.size;
	return *this;
}
void endinsert(T tvalue)
{
	if (size<capacity)
	{
		point[size] = tvalue;
		size++;
	}else
	{
		cout << "���棡������Ŀռ�������" << endl;
	}
}
void enddelete()
{
	if (size!=0)
	{
		size--;
	}else
	{
		cout << "���棡��û�д����κ����ݣ�" << endl;
	}
}
T& operator[](int tnumber)
{
	return point[tnumber];
}
public:
	T* point;
	int capacity;
	int size;
};
