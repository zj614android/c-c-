#include<iostream>
#include <cstring>
#include <string>
using namespace std;

void main() {

	cout << "*********************C���***********************" << endl;
	//��̬1��char greeting[6]
	char greeting[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	cout << "Greeting message:";
	cout << greeting << endl;
	//�����Greeting message: Hello


	cout << "--------------------------------------------------" << endl;
	//�±��⼸���������µ�ͷ�ļ���#include <cstring>
	//api�ο���http://www.runoob.com/cplusplus/cpp-strings.html
	char str1[11] = "Hello";
	char str2[11] = "World";
	char str3[11];
	int  len;
	
	// ���� str1 �� str3
	strcpy(str3, str1);
	cout << "strcpy( str3, str1) : " << str3 << endl;

	// ���� str1 �� str2
	strcat(str1, str2);
	cout << "strcat( str1, str2): " << str1 << endl;

	// ���Ӻ�str1 ���ܳ���
	len = strlen(str1);
	cout << "strlen(str1) : " << len << endl;

	cout << "*********************C++���***********************" << endl;
	//�����µ�ͷ�ļ� #include <string>

	string string1 = "Hello";
	string string2 = "World";
	string string3;
	int  length;

	// ���� str1 �� str3
	string3 = string1;
	cout << "str3 : " << string3 << endl;

	// ���� str1 �� str2
	string3 = string1 + string2;
	cout << "str1 + str2 : " << str3 << endl;

	// ���Ӻ�str3 ���ܳ���
	length = string3.size();
	cout << "str3.size() :  " << length << endl;


	getchar();

}