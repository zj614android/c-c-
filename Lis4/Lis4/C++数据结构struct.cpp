#include <iostream>
#include <cstring>

using namespace std;

// ����һ���ṹ������ Books 
struct Person
{
	char name[40];
	int age;
};


//C++���ݽṹ
void main() {

	Person zhangsan,lisi;

	strcpy(zhangsan.name, "����");
	zhangsan.age = 18;

	strcpy(lisi.name, "����");
	lisi.age = 20;


	cout << "zhangsan name : " << zhangsan.name << endl;
	cout << "zhangsan age : " << zhangsan.age << endl;

	cout << "lisi name : " << lisi.name << endl;
	cout << "lisi age : " << lisi.age << endl;


	getchar();

}