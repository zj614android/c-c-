#include <iostream>

using namespace std;

//ָ�����ʹ��
int main()
{
	int  var1;
	char var2[10];


	int *p;
	p = &var1;
	cout << "var1 �����ĵ�ַ�� ";
	cout << p << endl;

	char *x;
	x = var2;
	cout << "var2 �����ĵ�ַ�� ";
	cout << &x << endl;

	getchar();

	return 0;
}
