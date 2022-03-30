//3. Write a pthread program that implements simple initialization code.
#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>

static void* thread1(void *arg)
{
	
	char *s = (char *) arg;
	printf("%s\n",s);
	sleep(5);
	return (void*) strlen(s);
	return 0;
}
int main(int argc, char *argv[])
{
	pthread_t tid;
	void *res;
	int s;
	 pthread_create(&tid,NULL,thread1,"hellow world");
	printf("messseag from main()\n");
	sleep(2);

	pthread_join(tid,&res); //make MAIN to wait for thermination of THREAD process
	printf("thread return %ld\ n",(long) res);
	exit (0);
}
