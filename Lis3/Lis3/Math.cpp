
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

void genRandom();

int main()
{
	// ���ֶ���
	short  s = 10;
	int    i = -1000;
	long   l = 100000;
	float  f = 230.47;
	double d = 200.374;

	// ��ѧ����
	cout << "sin(d) :" << sin(d) << endl;
	cout << "abs(i)  :" << abs(i) << endl;
	cout << "floor(d) :" << floor(d) << endl;
	cout << "sqrt(f) :" << sqrt(f) << endl;
	cout << "pow( d, 2) :" << pow(d, 2) << endl;


	genRandom();

	getchar();

	return 0;
}

//���������õ�ctimeͷ�ļ�
void genRandom() {
	int i, j;

	// ��������
	srand((unsigned)time(NULL));

	/* ���� 10 ������� */
	for (i = 0; i < 10; i++)
	{
		// ����ʵ�ʵ������
		j = rand();
		cout << "������� " << j << endl;
	}
}
