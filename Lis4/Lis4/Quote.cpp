#include <iostream>
using namespace std;
void changeValue(int & a, double & b);

//���� ����ʹ�� �� ��������Ϊһ���������ݸ�����
void main() {

	// �����򵥵ı���
	int    i;
	double d;

	// �������ñ���
	int&    r = i;
	double& s = d;

	i = 666;
	d = 66.6;

	cout << "Value of r : " << r << endl;
	cout << "Value of s : " << s << endl;

	//-----------------changeValue();---------------
	changeValue(r,s);
	cout << "Value of i : " << i << endl;
	cout << "Value of d : " << d << endl;


	getchar();
}


void changeValue(int & a, double & b) {
	cout << "---------changeValue-----------" << endl;
	a = 888;
	b = 888.88;
}