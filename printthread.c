#include<pthread.h>
#include<stdio.h>
pthread_t tid;
void* thread1(void *arg)
{
	//printf("nwe thread\n");
//return NULL;
pid_t pid;
pthread_t tid;
pid = getpid();
tid = pthread_self();
printf("pid %u tid %u \n",(unsigned int)pid, (unsigned int)tid);
return 0;
}
int main(void)
{
	int ret = pthread_create(&tid,NULL,thread1,NULL);
if(ret != 0)
	printf("thread is not creat %s\n", strerror(ret));

//sleep(2);
while(1);
exit(0);
}
