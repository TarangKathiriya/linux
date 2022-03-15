#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#define num_threads 3
int i=0;
void *myfun(void *null)
{
	
i++;
int result=0;
result = result + i*1000;
printf("result =%d\n",result);
pthread_exit(NULL);
}
int main(int argc, char *argv[])
{
pthread_t thread[num_threads];
pthread_attr_t attr;
int rc, t, status, detach_state;

pthread_attr_init(&attr);
pthread_attr_setdetachstate(&attr,PTHREAD_CREATE_DETACHED);
for(t=0; t<num_threads;t++)
{
printf("creat thread %d\n",t);
pthread_create(&thread[t], &attr, myfun, NULL);
}

pthread_attr_getdetachstate(&attr,&detach_state);
printf("\n detach state %d\n",(int *)detach_state);
printf("\n exiting for main\n");
pthread_exit(NULL);
}

