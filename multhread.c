#include<pthread.h>
#include<stdio.h>
pthread_t tid;
void* thread1(void *arg)
{
	printf("1 thread\n");
return NULL;
}
pthread_t tid2;
void* thread2(void *arg)
{
	printf("2 thread\n");
return NULL;
}
int main(void)
{
	int ret = pthread_create(&tid,NULL,thread1,NULL);
	int tk = pthread_create(&tid2,NULL,thread2,NULL);
if(ret && tk)
	printf("thread is not creat\n");
else
	printf("thresd is created\n");
		//sleep(2);
	pthread_join(tid,NULL); //make MAIN to wait for thermination of THREAD process
	pthread_join(tid2,NULL);



return 0;
}
