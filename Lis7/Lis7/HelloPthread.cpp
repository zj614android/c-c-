#include <iostream>

#include<pthread.h>// 必须的头文件

using namespace std;
#pragma comment(lib, "pthreadVC2.lib")


void * testSay(void *) {
	int num = 86;
	int * p = &num;
	cout << "wtf ... testSay" << endl;
	return p;
}

int main()
{
	//创建4个线程id，作为参数一会使用
	pthread_t thredIds[4];

	int threadCount = sizeof(thredIds) / sizeof(pthread_t);

	int num = 889;
	int *p = &num;
	for (int i = 0; i < threadCount; i++){
		pthread_create(&thredIds[i],NULL,testSay,p);
	}

	getchar();

	//等各个线程退出后，进程才结束，否则进程强制结束了，线程可能还没反应过来；
	pthread_exit(NULL);

	return 0;
}
