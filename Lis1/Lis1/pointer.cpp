#include <stdio.h>
#include <Windows.h>

//ָ��
//ָ��洢���Ǳ������ڴ��ַ
//�ڴ��ַ��ϵͳ�����ݷ���ı�ţ����ƺţ�
void main(){

	int i = 90;

	//ָ�����������һ��int���͵�ָ��
	int* p = &i; //&��ȡ��ַ��  ȡi�ĵ�ַ  p��ֵ����i����������ڴ��ַ  
	printf("%#x\n",p);// %x=>50fb50   %#x=>0x50fb50  ���#ֻ��һ��0x�ĸ�ʽ
	
	float f = 89.5f;

	//����һ��float���͵�ָ��
	float *fp = &f;
	printf("%#x\n", fp);

	system("pause");

}