#include<pthread.h>
#include<stdio.h>
pthread_t tid;
void* thread1(void *arg)
{
	printf("nwe thread\n");
return NULL;
}
int main(void)
{
	int ret = pthread_create(&tid,NULL,thread1,NULL);
if(ret)
	printf("thread is not creat\n");
else
	printf("thresd is created\n");
//sleep(2);
pthread_join(tid,NULL); //make MAIN to wait for thermination of THREAD process
return 0;
}
