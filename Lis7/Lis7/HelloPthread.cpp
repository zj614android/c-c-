#include <iostream>

#include<pthread.h>// 必须的头文件

using namespace std;
#pragma comment(lib, "pthreadVC2.lib")




int main()
{	
	//创建4个线程id，作为参数一会使用
	pthread_t thredIds[4];

	int threadCount = sizeof(thredIds) / sizeof(pthread_t);
	for (int i = 0; i < threadCount; i++){
		pthread_create(&thredIds[i],NULL,);
	}


	return 0;
}
