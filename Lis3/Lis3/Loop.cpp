#include <iostream>
using namespace std;

void main() {

	int num = 1;

	//while ��javaһ��
	while (true) {
		cout << "while i == " << num << endl;
	
		if (num == 10) {
			break;////��javaһ��
		}
		num++;
	}

	//for ��javaһ��
	for (size_t i = 0; i < num; i++){
		cout << "for i == " << i << endl;
	}


	//dowhile��javaһ��  ��do��while
	do {
		cout << "do-while num == " << num << endl;
	} while (false);

	//continue ��javaһ��
	for (size_t i = 0; i < num; i++) {
		cout << "continue continue continue " << endl;
		continue;
		cout << "for i continue == " << i << endl;
	}


	getchar();
	

}