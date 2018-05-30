#include <iostream>
using namespace std;

void main() {

	int num = 1;

	//while 跟java一样
	while (true) {
		cout << "while i == " << num << endl;
	
		if (num == 10) {
			break;////跟java一样
		}
		num++;
	}

	//for 跟java一样
	for (size_t i = 0; i < num; i++){
		cout << "for i == " << i << endl;
	}


	//dowhile跟java一样  先do再while
	do {
		cout << "do-while num == " << num << endl;
	} while (false);

	//continue 跟java一样
	for (size_t i = 0; i < num; i++) {
		cout << "continue continue continue " << endl;
		continue;
		cout << "for i continue == " << i << endl;
	}


	getchar();
	

}