
#include <iostream>
using namespace std;

int main()
{
	//------��̬�����ڴ棨ʵ�������д���ʵ����һ�д���Ĺ��ܣ�double pvalue = 11.99;��----------
	double* pvalue = NULL; // ��ʼ��Ϊ null ��ָ��
	pvalue = new double;   // Ϊ���������ڴ�
	cout << "pvalue address: " << pvalue << endl;

	*pvalue = 11.99;     // �ڷ���ĵ�ַ��ֵ
	cout << "��ֵ֮�� Value of pvalue : " << *pvalue << endl;

    //------ �жϷ���ĵ�ַ�Ƿ�Ϊ�� ----------
	double* pvalueif = NULL;


	//������
	//if(0038D3A0) ==> true  ,!true == false��������
	//����if(0) == > false , !false == true ����ô��oom
	if (!(pvalueif = new double))
	{
		cout << "error: out of memory." << endl;
		exit(1);
	}
	else if (pvalueif = new double) {
		cout << "yes: ����" << endl;
	}

	delete pvalue;         // �ͷ��ڴ�


	getchar();
	return 0;
}
