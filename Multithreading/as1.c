//1.Write a pthread application where main task terminated but pending pthreads task still execute.

#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>

int td1()
{
	
	int a=5, b=10;
	int c;
	printf("thread task start\n");
	//sleep(5);
	a = a+b;
	printf("%d\n",a);
	printf("thread task finished\n");
	
	return c;
}


int main()
{
	pthread_t tid;
	void *res;
	
	pthread_create(&tid,NULL,td1,"hellow world");

	printf("main task terminated\n");
	
	pthread_exit(NULL);//terminate main process

	printf("thread return %ld\ n",(long) res);

}
