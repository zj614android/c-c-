#include <stdio.h>
#include <stdlib.h>
#define GET_ARRAY_LEN(array,len){len = (sizeof(array) / sizeof(array[0]));}

//����һ���������� �꣬�����鳤�ȴ洢�ڱ���len��
int main(){

	char a[] = { '1','2','3','4' };

	int len;

	GET_ARRAY_LEN(a, len)

	//����Ԥ����ĺ꣬ȡ������a�ĳ��ȣ�������洢�ڱ���len��

	printf("size == %d/n", len);

	system("pause");

	return 0;
}