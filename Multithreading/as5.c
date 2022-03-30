#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<semaphore.h>
#include<sys/types.h>
#include<errno.h>
#include<unistd.h>
#include<bits/types.h>

static pthread_spinlock_t spinlock;
volatile int slock;

void *spinlockthread(void *i)
{
	int rc;
	int count=0;
	printf("thread %d, getting spin lock\n",(int *)i);
	rc = pthread_spin_lock(&slock);

	printf("%d thread unlock the spin lock\n",(int *)i);
	rc = pthread_spin_unlock(&slock);

	printf("%d thread complete\n",(int *)i);
return NULL;
}

int main()
{
	int rc=0;
	pthread_t td;
	pthread_spin_init(&slock,PTHREAD_PROCESS_PRIVATE);
	
	printf("main, get spin lock\n");
	rc = pthread_spin_lock(&slock);
	printf("main, creat the spin lock thread\n");
	rc = pthread_create(&td,NULL,spinlockthread,(int *)1);

	printf("main wait a bit holding spin lock\n");
	sleep(3);
	rc = pthread_spin_unlock(&slock);
	if(rc==0)
	{
	printf("\n main thread success unlock\n");
	}
	else{
	printf("\n main  thred unsucess\n");
	}

	pthread_join(td,NULL);

	printf("main complete\n");
return 0;
}
