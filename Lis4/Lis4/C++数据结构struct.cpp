#include <iostream>
#include <cstring>

using namespace std;

// 声明一个结构体类型 Books 
struct Person
{
	char name[40];
	int age;
};


//C++数据结构
void main() {

	Person zhangsan,lisi;

	strcpy(zhangsan.name, "张三");
	zhangsan.age = 18;

	strcpy(lisi.name, "李四");
	lisi.age = 20;


	cout << "zhangsan name : " << zhangsan.name << endl;
	cout << "zhangsan age : " << zhangsan.age << endl;

	cout << "lisi name : " << lisi.name << endl;
	cout << "lisi age : " << lisi.age << endl;


	getchar();

}