#include<iostream>
using namespace std;

//���常��
class Father {
	protected:
		void fatherMethod();
};

void Father::fatherMethod() {
	cout << "father's method" << endl;
}

//���� �̳и���
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