#include <iostream>

using namespace std;

int main()
{
	int  *ptr = NULL;

	cout << "ptr 的值是 " << ptr << endl;


	//判空

	if (ptr == NULL) {    /* 如果 ptr 非空，则完成 */
		cout << "ptr为空" << endl;
	}
	else
	{
	
	}

	if (!ptr)    /* 如果 ptr 为空，则完成 */
		cout << "ptr不为空" << endl;

	getchar();

	return 0;
}