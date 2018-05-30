
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

void genRandom();

int main()
{
	// 数字定义
	short  s = 10;
	int    i = -1000;
	long   l = 100000;
	float  f = 230.47;
	double d = 200.374;

	// 数学运算
	cout << "sin(d) :" << sin(d) << endl;
	cout << "abs(i)  :" << abs(i) << endl;
	cout << "floor(d) :" << floor(d) << endl;
	cout << "sqrt(f) :" << sqrt(f) << endl;
	cout << "pow( d, 2) :" << pow(d, 2) << endl;


	genRandom();

	getchar();

	return 0;
}

//这里又引用到ctime头文件
void genRandom() {
	int i, j;

	// 设置种子
	srand((unsigned)time(NULL));

	/* 生成 10 个随机数 */
	for (i = 0; i < 10; i++)
	{
		// 生成实际的随机数
		j = rand();
		cout << "随机数： " << j << endl;
	}
}
