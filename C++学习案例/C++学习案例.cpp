#include "index.h"
//函数模板
//可以将函数的类型参数化
template<typename T>//声明一个函数模板，告诉编译器后面的T是一个通用数据类型
void swapmain(T& a,T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 12;
	int b = 20;
	cout << a << "和" << b << endl;
	//使用模板
	//1.自动类型推导
	swapmain(a, b);
	cout << a << "和" << b << endl;
	//显示指定类型
	swapmain<int>(a, b);
	cout << a << "和" << b << endl;
	return 0;
	system("pause");
}