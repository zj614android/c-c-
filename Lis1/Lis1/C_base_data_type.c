#include <stdio.h>

//������������
// ��ͬ�������Ͷ�Ӧ�Ĵ�ӡռλ���Լ��ֽ���
// int      %d				sizeof(int)
// short    %d				
// long     %ld			
// float    %f			
// double   %lf			
// char		%c			
//  %x      ʮ������		
//  %o      �˽���		
//  %s      �ַ���			

void main() {


	int i = 1;
	printf("%d\n", i);//int ռλ���� %d

	short st = 2;
	printf("%d\n", st);//int ռλ���� %d

	float f = 23.3;
	printf("%f\n", f);// float ��%f

	//sizeof ��������
	printf("intռ��%d���ֽ���\n", sizeof(int));
	printf("stռ��%d���ֽ���\n", sizeof(short));
	printf("floatռ��%d���ֽ���\n", sizeof(float));


	//һ��ѭ��
	for (int n = 0; n < 10; n++) {
		printf("%d\n", n);//int ռλ���� %d
	}


	getchar();//io���



}



