#include <iostream>

#include<pthread.h>// 必须的头文件

using namespace std;
#pragma comment(lib, "pthreadVC2.lib")

struct sayStruct {
public:
	char* saywhat;
	char* whosay;
	int id;
};

int threadCount = 0;

void * testSay(void * vp) {

	//这儿可能会产生转换异常，所以传参一定要传对。
	struct sayStruct *tempCastArags = (struct sayStruct *)vp;

	int sayId = tempCastArags->id;
	const char* sayWhat = tempCastArags->saywhat;
	const char* whoSay = tempCastArags->whosay;

	cout <<"threadCount == "<< threadCount << "   sayId => " << sayId << "___whoSay__" << whoSay << "sayWhat__" << sayWhat << endl;
	threadCount++;
	//pthread_detach(pthread_self());//detach 方式 2
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
		//pthread_join(thredIds[i], NULL);//等待线程执行完毕  join 方式
		pthread_detach(thredIds[i]);//detach 方式 1
	}

	getchar();
	return 0;
}