#include "index.h"
template <class T>
class Arrayclass
{
public:
Arrayclass(int tcapacity)
	{
		cout << "运行构造函数" << endl;
		capacity = tcapacity;
		size = 0;
		point = new T[tcapacity];
	}
Arrayclass(const Arrayclass&tarrayclass)
{
	cout << "拷贝构造函数" << endl;
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
		cout << "运行析构函数" << endl;
		if (point!=NULL)
		{
			delete[] point;
			point = NULL;
		}
	}
Arrayclass& operator=(Arrayclass&tarrayclass)
{
	cout << "运行operator=函数" << endl;
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
		cout << "警告！您申请的空间已满！" << endl;
	}
}
void enddelete()
{
	if (size!=0)
	{
		size--;
	}else
	{
		cout << "警告！您没有储存任何数据！" << endl;
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
