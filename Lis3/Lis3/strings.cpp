#include<iostream>
#include <cstring>
#include <string>
using namespace std;

void main() {

	cout << "*********************C风格***********************" << endl;
	//形态1：char greeting[6]
	char greeting[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	cout << "Greeting message:";
	cout << greeting << endl;
	//输出：Greeting message: Hello


	cout << "--------------------------------------------------" << endl;
	//下边这几个则依赖新的头文件：#include <cstring>
	//api参考：http://www.runoob.com/cplusplus/cpp-strings.html
	char str1[11] = "Hello";
	char str2[11] = "World";
	char str3[11];
	int  len;
	
	// 复制 str1 到 str3
	strcpy(str3, str1);
	cout << "strcpy( str3, str1) : " << str3 << endl;

	// 连接 str1 和 str2
	strcat(str1, str2);
	cout << "strcat( str1, str2): " << str1 << endl;

	// 连接后，str1 的总长度
	len = strlen(str1);
	cout << "strlen(str1) : " << len << endl;

	cout << "*********************C++风格***********************" << endl;
	//依赖新的头文件 #include <string>

	string string1 = "Hello";
	string string2 = "World";
	string string3;
	int  length;

	// 复制 str1 到 str3
	string3 = string1;
	cout << "str3 : " << string3 << endl;

	// 连接 str1 和 str2
	string3 = string1 + string2;
	cout << "str1 + str2 : " << str3 << endl;

	// 连接后，str3 的总长度
	length = string3.size();
	cout << "str3.size() :  " << length << endl;


	getchar();

}