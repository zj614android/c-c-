#include <iostream>

using namespace std;

//指针基本使用
int main()
{
	int  var1;
	char var2[10];


	int *p;
	p = &var1;
	cout << "var1 变量的地址： ";
	cout << p << endl;

	char *x;
	x = var2;
	cout << "var2 变量的地址： ";
	cout << &x << endl;

	getchar();

	return 0;
}
