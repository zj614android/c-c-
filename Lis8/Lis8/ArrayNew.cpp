#include <iostream>
using namespace std;



void one_dimmision();
void two_dimmision();
void threee_dimmision();

int main()
{
	
	//one_dimmision();
	//two_dimmision();
	threee_dimmision();

	getchar();

	return 0;
}


//һά����
void one_dimmision() {

	//int[3] array = { 1,2,3 };

	int * array;
	int i = 3;

	//�����ڴ�
	array = new int[i];

	//��ֵ
	for (int o = 0; o < i; o++)
	{
		array[o] = o;
	}

	//��ӡ
	//int size = sizeof(array) / sizeof(array[0]);//��̬���鲻�������ַ�ʽ��ȡ�䳤��

	//��ӡ
	for (int i = 0; i < 3; i++)
	{
		cout << array[i] << ",";
	}


	//ɾ���������ڴ�
	delete[]array;

}

//0, 1, 2, 3,
//10, 11, 12, 13,
//20, 21, 22, 23,
//��ά����
void two_dimmision() {
	int ** array;//��ά����ָ�룬��ά����2��*
	int i = 3,j=4;//3��4��
	array = new int*[i];

	//�����ڴ�
	for (int o = 0; o < i; o++){
		array[o] = new int[j];//����ÿ��Ԫ������һ������
	}

	//��ֵ 
	for (int m = 0; m < i; m++)
	{
		for (int n = 0; n < j;n++) {
			array[m][n] = 10 * m + n;

			//��ӡ
			if (n == j -1) {
				cout << array[m][n] << "," << endl;
			}
			else {
				cout << array[m][n] << ",";
			}
		}
	}



	//ɾ��
	for (int o = 0; o < i; o++)
	{
		delete [] array[o];//delete ���� Ԫ��
	}

}

//��ά����
void threee_dimmision() {
	int *** array;
	int i = 3, j = 4, k = 5;
	array = new int **[i];

	//�����ڴ� 1ά
	for (int o = 0; o < i; o++)
	{
		array[o] = new int *[j];//����ÿ��Ԫ������һ����ά����
	}

	//�����ڴ� 2ά
	for (int m = 0; m < i; m++)
	{

		for (int n = 0; n < j; n++) {
			array[m][n] = new int[k];//�����ڴ���ά������ÿ��Ԫ������һ��һά����

									 //��ֵ
			for (int o = 0; o < k; o++)
			{
				array[m][n][o] = 100 * m + (10 * n) + o;

				//��ӡ

				//ɾ���������ڴ�
				//delete[] array[m];


				if (o == k - 1) {
					cout << array[m][n][o] << "," << endl;
				}
				else {
					cout << array[m][n][o] << ",";
				}
			}
			cout << endl;
		}
		cout << endl;
	}

	//��ֵ


	//��ӡ
	//20, 21, 22, 23, 24,

	//30, 31, 32, 33, 34,

	//100, 101, 102, 103, 104,

	//110, 111, 112, 113, 114,

	//120, 121, 122, 123, 124,

	//130, 131, 132, 133, 134,


	//200, 201, 202, 203, 204,

	//210, 211, 212, 213, 214,

	//220, 221, 222, 223, 224,

	//230, 231, 232, 233, 234,



}