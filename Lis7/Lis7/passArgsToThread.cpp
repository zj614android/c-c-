#include <iostream>

#include<pthread.h>// �����ͷ�ļ�

using namespace std;
#pragma comment(lib, "pthreadVC2.lib")

struct sayStruct{
public:
	char* saywhat;
	char* whosay;
	int id;
};

void * testSay(void * vp) {

	//������ܻ����ת���쳣�����Դ���һ��Ҫ���ԡ�
	struct sayStruct *tempCastArags = (struct sayStruct *)vp;

	int sayId = tempCastArags->id;
	const char* sayWhat = tempCastArags->saywhat;
	const char* whoSay = tempCastArags->whosay;

	cout << "sayId => " << sayId << "___whoSay__" << whoSay <<  "sayWhat__" << sayWhat << endl;
	
	return NULL;
}

int main()
{
	//����4���߳�id����Ϊ����һ��ʹ��
	pthread_t thredIds[4];

	int threadCount = sizeof(thredIds) / sizeof(pthread_t);

	sayStruct tempSayStruct;
	tempSayStruct.id = 666;
	char tempSaywhat[20];
	strcpy(tempSaywhat, "what all say");
	char tempWhosay[20];
	strcpy(tempWhosay, "�Ա�ɽ");

	tempSayStruct.saywhat = tempSaywhat;
	tempSayStruct.whosay = tempWhosay;
	struct sayStruct *p = &tempSayStruct;
	for (int i = 0; i < threadCount; i++) {
		pthread_create(&thredIds[i], NULL, testSay, p);
	}

	getchar();

	//�ȸ����߳��˳��󣬽��̲Ž������������ǿ�ƽ����ˣ��߳̿��ܻ�û��Ӧ������
	pthread_exit(NULL);

	return 0;
}