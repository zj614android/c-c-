#include <stdio.h>

void main() {

	int i = 20;

	int *p = &i;
	*p = 666;

	printf("i==%d",i);
	getchar();

}