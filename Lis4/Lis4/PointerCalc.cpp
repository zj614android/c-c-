#include <iostream>

using namespace std;
const int MAX = 3;//����Ҳ����ô����

int main()
{

	//-----------ͨ��ָ���������-----------
	cout << "ͨ��ָ���������" << endl;
	int  var[MAX] = { 10, 100, 200 };
	int  *ptr;

	// ָ���е������ַ
	ptr = var;
	for (int i = 0; i < MAX; i++)
	{
		cout << "Address of var[" << i << "] = ";//��ӡ��ӦԪ�صĵ�ַ
		cout << ptr << endl;

		cout << "Value of var[" << i << "] = ";//��ӡ��ӦԪ�ص�ֵ
		cout << *ptr << endl;

		// ��ָ���ƶ�����һ��λ��
		ptr++;
	}


	//-----------����һЩ��������-----------
	cout << "����һЩ��������" << endl;
	int  wtf[4] = { 666, 888, 999,222 };
	int *pointerWtf;
	pointerWtf = wtf;//����ı���������һ��ָ�룬ָ����������Ԫ��
	cout << "pointerWtf[0] == " << pointerWtf[0] << endl;
	pointerWtf++;
	cout << "pointerWtf[0] == " << pointerWtf[0] << endl;
	pointerWtf--;
	cout << "pointerWtf[0] == " << pointerWtf[0] << endl;


	getchar();

	return 0;
}