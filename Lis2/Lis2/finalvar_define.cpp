#include <iostream>
using namespace std;

// 在C++ 中，有两种简单的定义常量的方式
// 使用 #define 预处理器。
// 使用 const 关键字。

#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'
#define HELLO "HELLO"

void main() {

	int area;

	area = LENGTH * WIDTH;
	cout << area;
	cout << NEWLINE;
	cout << HELLO;

	getchar();
}

