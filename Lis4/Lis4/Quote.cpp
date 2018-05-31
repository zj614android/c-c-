#include <iostream>
using namespace std;
void changeValue(int & a, double & b);

//引用 基本使用 和 将引用作为一个参数传递给方法
void main() {

	// 声明简单的变量
	int    i;
	double d;

	// 声明引用变量
	int&    r = i;
	double& s = d;

	i = 666;
	d = 66.6;

	cout << "Value of r : " << r << endl;
	cout << "Value of s : " << s << endl;

	//-----------------changeValue();---------------
	changeValue(r,s);
	cout << "Value of i : " << i << endl;
	cout << "Value of d : " << d << endl;


	getchar();
}


void changeValue(int & a, double & b) {
	cout << "---------changeValue-----------" << endl;
	a = 888;
	b = 888.88;
}