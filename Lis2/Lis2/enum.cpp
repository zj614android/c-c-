#include <iostream>
using namespace std;

void main() {
	//д����java���
	//���ö���Դ�intָ���㲻����Ĭ�ϴ�0��ʼ���������1
	//�����������ˣ����������ֵΪ��ʵ������Ԫ��Ҳ����1

	enum color { red, green, blue } ;

	color c;

	c = green;

	cout << "WTF : c = " << c << "bule = " << blue << endl;
	
	enum color2 { white, yellow = 5, black } test;
	test = yellow;

	cout << "WTF : test yellow = " << test << "black = " << black << endl;

	system("pause");

}