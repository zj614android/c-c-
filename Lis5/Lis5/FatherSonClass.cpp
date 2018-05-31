#include<iostream>
using namespace std;

//定义父类
class Father {
	protected:
		void fatherMethod();
};

void Father::fatherMethod() {
	cout << "father's method" << endl;
}

//子类 继承父类
class Son :  Father {
	public:
		void SonMethod();
};

void Son::SonMethod() {
	fatherMethod();
	cout << "Son's method" << endl;
}

void main() {
	Son son;
	son.SonMethod();
	
	getchar();
}