#include <iostream>

#include<pthread.h>// 必须的头文件

using namespace std;
#pragma comment(lib, "pthreadVC2.lib")

struct sayStruct{
public:
	char* saywhat;
	char* whosay;
	int id;
};

void * testSay(void * vp) {

	//这儿可能会产生转换异常，所以传参一定要传对。
	struct sayStruct *tempCastArags = (struct sayStruct *)vp;

	int sayId = tempCastArags->id;
	const char* sayWhat = tempCastArags->saywhat;
	const char* whoSay = tempCastArags->whosay;

	cout << "sayId => " << sayId << "___whoSay__" << whoSay <<  "sayWhat__" << sayWhat << endl;
	
	return NULL;
}

int main()
{
	//创建4个线程id，作为参数一会使用
	pthread_t thredIds[4];

	int threadCount = sizeof(thredIds) / sizeof(pthread_t);

	sayStruct tempSayStruct;
	tempSayStruct.id = 666;
	char tempSaywhat[20];
	strcpy(tempSaywhat, "what all say");
	char tempWhosay[20];
	strcpy(tempWhosay, "赵本山");

	tempSayStruct.saywhat = tempSaywhat;
	tempSayStruct.whosay = tempWhosay;
	struct sayStruct *p = &tempSayStruct;
	for (int i = 0; i < threadCount; i++) {
		pthread_create(&thredIds[i], NULL, testSay, p);
	}

	getchar();

	//等各个线程退出后，进程才结束，否则进程强制结束了，线程可能还没反应过来；
	pthread_exit(NULL);

	return 0;
}