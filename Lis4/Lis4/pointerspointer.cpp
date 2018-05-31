#include <iostream>
//Ö¸ÕëµÄÖ¸Õë
using namespace std;

void main() {

	int value = 666;

	int *p = &value;
	int **pp = &p;

	cout << *(*pp) << endl;

	getchar();

}