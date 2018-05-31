#include <iostream>
using namespace std;
//template <class T>
//
//
//int getArrayLen(T& array) {//使用模板定义一 个函数getArrayLen,该函数将返回数组array的长度
//	return (sizeof(array) / sizeof(array[0]));
//}

int main(){
	
	//cout << "size == " << getArrayLen(a) << endl;
	char a[] = { '1','2','3' };
	int sizea;
	cout << "****************************"<< endl << endl;
	cout << "char a[] = { '1','2','3' }" << endl << endl;
	cout << "sizeof(a) 数组的总字节数长度 == " << sizeof(a) << endl;
	cout << "sizeof(a[0]) 数组中一个元素的步长 == " << sizeof(a[0]) << endl;
	sizea = sizeof(a) / sizeof(a[0]);
	cout << "sizeof(a)/sizeof(a[0]) 数组a长度计算 总长度除以步长  == " << sizea << endl << endl;
	cout << "****************************" << endl << endl;


	int b[5] = { 6,3,2,5,1 };
	int sizeb;
	cout << "int b[5] = { 6,3,2,5,1 }" << endl << endl;
	cout << "sizeof(b) 数组的总字节数长度 == " << sizeof(b) << endl;
	cout << "sizeof(a[0]) 数组中一个元素的步长 == " << sizeof(b[0]) << endl;
	sizeb = sizeof(b) / sizeof(b[0]);
	cout << "sizeof(b)/sizeof(a[0]) 数组b长度计算 总长度除以步长 == " << sizeb << endl << endl;
	cout << "****************************" << endl << endl;


	cout << "**************遍历数组b**************" << endl;

	for (int i = 0; i < sizeb; i++){
		int temp = b[i];
		//cout << "b[" << i << "]" << " == " << b[i] << endl << endl;
		cout << "b[%d]" << i << " == " << b[i] << endl;
	}
	
	getchar();
	return 0;
}

