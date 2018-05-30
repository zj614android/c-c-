#include <iostream>
using namespace std;//cout函数依赖于这个std命名空间

int main() {
	typedef int feet;
	feet distance = 666;
	cout << "distance == " << distance;
	getchar();
	return 0;
}


