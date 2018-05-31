#include <iostream>
using namespace std;

void pointerArray();
void pointerArray4Char();
void whatCharPointerArray();
const int MAX = 3;

int main(void) {

	cout << "********************whatCharPointerArray********************" << endl;
	whatCharPointerArray();
	cout << "********************pointerArray********************" << endl;
    pointerArray();
	cout << "********************pointerArray4Char********************" << endl;
	pointerArray4Char();
	getchar();
	return 0;
}


//char���飬��ԭʼ����⣬����������
void whatCharPointerArray() {

	char charArray[3] = { 'a','b','c' };
	char *pCharArray[3];
	for (int i = 0; i < MAX; i++) {
		pCharArray[i] = &charArray[i];//��ֵΪ�����ĵ�ַ
	}
	for (int i = 0; i < MAX; i++) {
		cout << "Value of var *pCharArray[" << i << "] = " << *pCharArray[i] << endl;
		cout << "Address of var pCharArray[" << i << "] = " << pCharArray[i] << endl;
	}
}

//int���飬��������������ӡ����
void pointerArray() {
	int var[MAX] = { 20,30,40 };
	int *ptr[MAX];
	for (int i = 0; i < MAX; i++) {
		ptr[i] = &var[i];//��ֵΪ�����ĵ�ַ
	}
	for (int i = 0; i < MAX; i++) {
		cout << "Value of var *ptr[" << i << "] = " << *ptr[i] << endl;
		cout << "Address of var ptr[" << i << "] = " << ptr[i] << endl;
	}
}

/**
* ��һ��ָ���ַ���ָ���������洢һ���ַ����б�
* Value of names[0] = sun;
*/
void pointerArray4Char() {
	const char *names[MAX] = {
		"sun","bin","sunbin"
	};
	for (int i = 0; i < MAX; i++) {
		cout << "Value of names[" << i << "] = ";//����ַ�����ֵ
		cout << names[i] << endl;
		cout << "Value of *names[" << i << "] = ";//���ָ����ָ���ַ����׵�ַ��ֵ
		cout << *names[i] << endl;
		cout << "Value of *names[" << i << "]+1 = ";//���ascii��ֵ
		cout << *names[i] + 1 << endl;
		cout << "Value of *(names[" << i << "]+1) = ";//���ָ����ָ���ַ����׵�ַ��һλ��ֵ
		cout << *(names[i] + 1) << endl;
	}

}