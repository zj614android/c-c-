#include <iostream>

using namespace std;

int main()
{
	int  *ptr = NULL;

	cout << "ptr ��ֵ�� " << ptr << endl;


	//�п�

	if (ptr == NULL) {    /* ��� ptr �ǿգ������ */
		cout << "ptrΪ��" << endl;
	}
	else
	{
	
	}

	if (!ptr)    /* ��� ptr Ϊ�գ������ */
		cout << "ptr��Ϊ��" << endl;

	getchar();

	return 0;
}