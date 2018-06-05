
#include <iostream>
using namespace std;

double division(int a, int b)
{
	if (b == 0)
	{
		throw "Division by zero condition!";
	}
	return (a / b);
}

int main()
{
	int x = 50;
	int y = 0;
	double z = 0;

	try {
		z = division(x, y);
		cout << z << endl;
	}
	catch (const char* msg) {//catch块跟抛出throw除的东西类型有对应，这里我们抛的一个字符串，它是const char*类型
		cerr << msg << endl;
	}

	getchar();
	return 0;
}
