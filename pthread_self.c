#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>

struct my_thread
{
	int thread_id;
	char mesg[100];
};

void *printhello(void *threadobj)
{
	pthread_t thread_id;
	struct my_thread *t1;
	t1 = (struct my_thread *) threadobj;
	thread_id = pthread_self();
	printf("\n thread id %u", thread_id);
	printf("\n %d thread message %s\n", t1->thread_id ,t1->mesg);
}

int main()
{
	pthread_t thread2, thread_id;
	int rc;
	struct my_thread t2;
	t2.thread_id =2;
	strcpy(t2.mesg,"\ni am 2 thd\n");
thread_id = pthread_self();
printf("\n main thread id %u", thread_id);

pthread_create(&thread2, NULL, printhello, (void *)&t2);

printf("\n exit form main thd\n");
pthread_exit(NULL);
}
