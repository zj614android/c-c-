#include <iostream>

using namespace std;

double vals[] = { 10.1, 12.6, 33.1, 24.1, 50.0 };

double& setValues(int i)
{	
	double &temp = vals[i];//将引用指向第i个元素
	return temp;   // 返回第 i 个元素的引用
	
}

// 要调用上面定义函数的主函数
int main()
{

	cout << "改变前的值" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "vals[" << i << "] = ";
		cout << vals[i] << endl;
	}

	setValues(1) = 20.23; // 改变第 2 个元素
	setValues(3) = 70.8;  // 改变第 4 个元素

	cout << "改变后的值" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "vals[" << i << "] = ";
		cout << vals[i] << endl;
	}

	getchar();

	return 0;
}
