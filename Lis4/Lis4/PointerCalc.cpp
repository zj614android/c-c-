#include <iostream>

using namespace std;
const int MAX = 3;//常量也能这么定义

int main()
{

	//-----------通过指针遍历数组-----------
	cout << "通过指针遍历数组" << endl;
	int  var[MAX] = { 10, 100, 200 };
	int  *ptr;

	// 指针中的数组地址
	ptr = var;
	for (int i = 0; i < MAX; i++)
	{
		cout << "Address of var[" << i << "] = ";//打印对应元素的地址
		cout << ptr << endl;

		cout << "Value of var[" << i << "] = ";//打印对应元素的值
		cout << *ptr << endl;

		// 将指针移动到下一个位置
		ptr++;
	}


	//-----------其他一些奇淫技巧-----------
	cout << "其他一些奇淫技巧" << endl;
	int  wtf[4] = { 666, 888, 999,222 };
	int *pointerWtf;
	pointerWtf = wtf;//数组的变量名就是一个指针，指向了数组首元素
	cout << "pointerWtf[0] == " << pointerWtf[0] << endl;
	pointerWtf++;
	cout << "pointerWtf[0] == " << pointerWtf[0] << endl;
	pointerWtf--;
	cout << "pointerWtf[0] == " << pointerWtf[0] << endl;


	getchar();

	return 0;
}