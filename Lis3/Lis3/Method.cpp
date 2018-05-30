#include<iostream>
using namespace std;

void sayHello();//函数声明，不声明编译不通过

void main() {

	sayHello();

	getchar();
}

void sayHello() {
	cout << " hello " << endl;
}