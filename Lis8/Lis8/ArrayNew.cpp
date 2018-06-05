#include <iostream>
using namespace std;



void one_dimmision();
void two_dimmision();
void threee_dimmision();

int main()
{
	
	//one_dimmision();
	//two_dimmision();
	threee_dimmision();

	getchar();

	return 0;
}


//一维数组
void one_dimmision() {

	//int[3] array = { 1,2,3 };

	int * array;
	int i = 3;

	//申请内存
	array = new int[i];

	//赋值
	for (int o = 0; o < i; o++)
	{
		array[o] = o;
	}

	//打印
	//int size = sizeof(array) / sizeof(array[0]);//动态数组不能用这种方式获取其长度

	//打印
	for (int i = 0; i < 3; i++)
	{
		cout << array[i] << ",";
	}


	//删除该数组内存
	delete[]array;

}

//0, 1, 2, 3,
//10, 11, 12, 13,
//20, 21, 22, 23,
//二维数组
void two_dimmision() {
	int ** array;//二维数组指针，二维就是2个*
	int i = 3,j=4;//3行4列
	array = new int*[i];

	//开辟内存
	for (int o = 0; o < i; o++){
		array[o] = new int[j];//数组每个元素又是一个数组
	}

	//赋值 
	for (int m = 0; m < i; m++)
	{
		for (int n = 0; n < j;n++) {
			array[m][n] = 10 * m + n;

			//打印
			if (n == j -1) {
				cout << array[m][n] << "," << endl;
			}
			else {
				cout << array[m][n] << ",";
			}
		}
	}



	//删除
	for (int o = 0; o < i; o++)
	{
		delete [] array[o];//delete 类型 元素
	}

}

//三维数组
void threee_dimmision() {
	int *** array;
	int i = 3, j = 4, k = 5;
	array = new int **[i];

	//开辟内存 1维
	for (int o = 0; o < i; o++)
	{
		array[o] = new int *[j];//数组每个元素又是一个二维数组
	}

	//开辟内存 2维
	for (int m = 0; m < i; m++)
	{

		for (int n = 0; n < j; n++) {
			array[m][n] = new int[k];//开辟内存三维，数组每个元素又是一个一维数组

									 //赋值
			for (int o = 0; o < k; o++)
			{
				array[m][n][o] = 100 * m + (10 * n) + o;

				//打印

				//删除该数组内存
				//delete[] array[m];


				if (o == k - 1) {
					cout << array[m][n][o] << "," << endl;
				}
				else {
					cout << array[m][n][o] << ",";
				}
			}
			cout << endl;
		}
		cout << endl;
	}

	//赋值


	//打印
	//20, 21, 22, 23, 24,

	//30, 31, 32, 33, 34,

	//100, 101, 102, 103, 104,

	//110, 111, 112, 113, 114,

	//120, 121, 122, 123, 124,

	//130, 131, 132, 133, 134,


	//200, 201, 202, 203, 204,

	//210, 211, 212, 213, 214,

	//220, 221, 222, 223, 224,

	//230, 231, 232, 233, 234,



}