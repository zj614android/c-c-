
#include <iostream>
using namespace std;

int main()
{
	//------动态分配内存（实际上三行代码实现了一行代码的功能：double pvalue = 11.99;）----------
	double* pvalue = NULL; // 初始化为 null 的指针
	pvalue = new double;   // 为变量请求内存
	cout << "pvalue address: " << pvalue << endl;

	*pvalue = 11.99;     // 在分配的地址赋值
	cout << "赋值之后 Value of pvalue : " << *pvalue << endl;

    //------ 判断分配的地址是否为空 ----------
	double* pvalueif = NULL;


	//分析：
	//if(0038D3A0) ==> true  ,!true == false，则正常
	//若是if(0) == > false , !false == true ，那么则oom
	if (!(pvalueif = new double))
	{
		cout << "error: out of memory." << endl;
		exit(1);
	}
	else if (pvalueif = new double) {
		cout << "yes: 正常" << endl;
	}

	delete pvalue;         // 释放内存


	getchar();
	return 0;
}
