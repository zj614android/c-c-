#include <iostream>

#include<pthread.h>// �����ͷ�ļ�

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
	//����4���߳�id����Ϊ����һ��ʹ��
	pthread_t thredIds[4];

	int threadCount = sizeof(thredIds) / sizeof(pthread_t);

	int num = 889;
	int *p = &num;
	for (int i = 0; i < threadCount; i++){
		pthread_create(&thredIds[i],NULL,testSay,p);
	}

	getchar();

	//�ȸ����߳��˳��󣬽��̲Ž������������ǿ�ƽ����ˣ��߳̿��ܻ�û��Ӧ������
	pthread_exit(NULL);

	return 0;
}
