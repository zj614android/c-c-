#include <iostream>

#include<pthread.h>// �����ͷ�ļ�

using namespace std;
#pragma comment(lib, "pthreadVC2.lib")




int main()
{	
	//����4���߳�id����Ϊ����һ��ʹ��
	pthread_t thredIds[4];

	int threadCount = sizeof(thredIds) / sizeof(pthread_t);
	for (int i = 0; i < threadCount; i++){
		pthread_create(&thredIds[i],NULL,);
	}


	return 0;
}
