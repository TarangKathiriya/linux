//5.Write a program that implements threads synchronization using mutex techniques.
#include<stdio.h>
#include<stdlib.h>
#include<semaphore.h>

int T=5;

pthread_mutex_t mutex;

void *thread_mul(void *arg)
{
	pthread_mutex_lock(&mutex);
	printf("mutex lock in thread_mul\n");

	T = T*2;
	printf("T is = %d\n",T);
 
	pthread_mutex_unlock(&mutex);
	printf("mutex unlock in thread_mul\n");
}
void *thread_div(void *arg)
{
	pthread_mutex_lock(&mutex);
	printf("mutex lock in thread_div\n");

	T= T/2;
	printf("T is = %d\n",T);

	pthread_mutex_unlock(&mutex);
	printf("mutex unlock in thread_div\n");
}

int main()
{
	pthread_t thread1, thread2;

	pthread_mutex_init(&mutex, NULL);

	pthread_create(&thread1,NULL,thread_mul,NULL);
	pthread_create(&thread2,NULL,thread_div,NULL);

pthread_join(thread1,NULL);
pthread_join(thread2,NULL);

printf("sharedvar=%d\n",T);

return 0;
}
