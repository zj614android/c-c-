#include <iostream>
using namespace std;

int main()
{

	//HELLO:cout << " ��˵Hello��˵YO��Hello YO !Hello Yo!";
	//goto HELLO;


	// �ֲ���������
	int a = 10;

	// do ѭ��ִ��
	LOOP:do
	{
		if (a == 15)
		{
			// ��������
			a = a + 1;
			goto LOOP;
		}
		cout << "a ��ֵ��" << a << endl;
		a = a + 1;
	} while (a < 20);



	getchar();

	return 0;
}