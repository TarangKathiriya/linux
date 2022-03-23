//4. Write a program where pthread task displays the thread id and also prints the calling process pid.
#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>

int x = 12;
pthread_t tid;
static void* thread_id(void *ptr)
{
	x++;
}

int main()
{
	//pthread_t tid;


	pthread_create(&tid,NULL,thread_id,NULL);
	printf("thread id is %ld",tid);
	printf("\n--------------\n");
	printf("process id id %d",getpid());
return 0;
}
