#include <iostream>
using namespace std;
//template <class T>
//
//
//int getArrayLen(T& array) {//ʹ��ģ�嶨��һ ������getArrayLen,�ú�������������array�ĳ���
//	return (sizeof(array) / sizeof(array[0]));
//}

int main(){
	
	//cout << "size == " << getArrayLen(a) << endl;
	char a[] = { '1','2','3' };
	int sizea;
	cout << "****************************"<< endl << endl;
	cout << "char a[] = { '1','2','3' }" << endl << endl;
	cout << "sizeof(a) ��������ֽ������� == " << sizeof(a) << endl;
	cout << "sizeof(a[0]) ������һ��Ԫ�صĲ��� == " << sizeof(a[0]) << endl;
	sizea = sizeof(a) / sizeof(a[0]);
	cout << "sizeof(a)/sizeof(a[0]) ����a���ȼ��� �ܳ��ȳ��Բ���  == " << sizea << endl << endl;
	cout << "****************************" << endl << endl;


	int b[5] = { 6,3,2,5,1 };
	int sizeb;
	cout << "int b[5] = { 6,3,2,5,1 }" << endl << endl;
	cout << "sizeof(b) ��������ֽ������� == " << sizeof(b) << endl;
	cout << "sizeof(a[0]) ������һ��Ԫ�صĲ��� == " << sizeof(b[0]) << endl;
	sizeb = sizeof(b) / sizeof(b[0]);
	cout << "sizeof(b)/sizeof(a[0]) ����b���ȼ��� �ܳ��ȳ��Բ��� == " << sizeb << endl << endl;
	cout << "****************************" << endl << endl;


	cout << "**************��������b**************" << endl;

	for (int i = 0; i < sizeb; i++){
		int temp = b[i];
		//cout << "b[" << i << "]" << " == " << b[i] << endl << endl;
		cout << "b[%d]" << i << " == " << b[i] << endl;
	}
	
	getchar();
	return 0;
}

