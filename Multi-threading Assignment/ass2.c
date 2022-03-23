//2.Write a program where thread cancel itself.(use pthread_cancel()).

#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>

static void* thread1(void *ptr)
{
	int s;
	s = pthread_cancel(pthread_self());
	printf("pthread_cancel executed \n");
	
return 0;
}
int main()
{
pthread_t tid;
void *res;
int s;
	 pthread_create(&tid,NULL,thread1,NULL);
printf("messseag from main()\n");

           
//sleep(2);
pthread_join(tid,NULL); //make MAIN to wait for thermination of THREAD process
//exit (0);
}
