#include <stdio.h>

//基本数据类型
// 不同数据类型对应的打印占位符以及字节数
// int      %d				sizeof(int)
// short    %d				
// long     %ld			
// float    %f			
// double   %lf			
// char		%c			
//  %x      十六进制		
//  %o      八进制		
//  %s      字符串			

void main() {


	int i = 1;
	printf("%d\n", i);//int 占位符是 %d

	short st = 2;
	printf("%d\n", st);//int 占位符是 %d

	float f = 23.3;
	printf("%f\n", f);// float 用%f

	//sizeof 函数测试
	printf("int占了%d个字节数\n", sizeof(int));
	printf("st占了%d个字节数\n", sizeof(short));
	printf("float占了%d个字节数\n", sizeof(float));


	//一波循环
	for (int n = 0; n < 10; n++) {
		printf("%d\n", n);//int 占位符是 %d
	}


	getchar();//io相关



}



