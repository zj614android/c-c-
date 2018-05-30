#include <iostream>
using namespace std;

int main()
{

	//HELLO:cout << " 我说Hello你说YO，Hello YO !Hello Yo!";
	//goto HELLO;


	// 局部变量声明
	int a = 10;

	// do 循环执行
	LOOP:do
	{
		if (a == 15)
		{
			// 跳过迭代
			a = a + 1;
			goto LOOP;
		}
		cout << "a 的值：" << a << endl;
		a = a + 1;
	} while (a < 20);



	getchar();

	return 0;
}