#include <iostream>

using namespace std;

class printData
{
public:
	void print(int i) {
		cout << "����Ϊ: " << i << endl;
	}

	void print(double  f) {
		cout << "������Ϊ: " << f << endl;
	}

	void print(string c) {
		//cout << "�ַ���Ϊ: " << c << endl;
	}

};

int main(void)
{
	printData pd;

	// �������
	pd.print(5);
	// ���������
	pd.print(500.263);
	// ����ַ���
	pd.print("Hello C++");


	getchar();

	return 0;
}
