#include <stdio.h>
#include <Windows.h>

//指针
//指针存储的是变量的内存地址
//内存地址，系统给数据分配的编号（门牌号）
void main(){

	int i = 90;

	//指针变量，创建一个int类型的指针
	int* p = &i; //&是取地址符  取i的地址  p的值就是i这个变量的内存地址  
	printf("%#x\n",p);// %x=>50fb50   %#x=>0x50fb50  这个#只是一个0x的格式
	
	float f = 89.5f;

	//创建一个float类型的指针
	float *fp = &f;
	printf("%#x\n", fp);

	system("pause");

}