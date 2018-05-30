#include <iostream>
using namespace std;

void main() {
	//写法跟java差不多
	//这个枚举自带int指，你不设它默认从0开始，后面递增1
	//如果你给他设了，它则意这个值为其实，后面元素也递增1

	enum color { red, green, blue } ;

	color c;

	c = green;

	cout << "WTF : c = " << c << "bule = " << blue << endl;
	
	enum color2 { white, yellow = 5, black } test;
	test = yellow;

	cout << "WTF : test yellow = " << test << "black = " << black << endl;

	system("pause");

}