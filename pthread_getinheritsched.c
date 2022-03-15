#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>

void* proc(void* param)
{
	sleep(3);
	return 0;
}

int main(int argc, char *argv[])
{
	pthread_attr_t attr;
	pthread_t id;
	int err;
int info;
//for defult inherite pro. & pri.
pthread_attr_init(&attr);
pthread_attr_getinheritsched(&attr,&info);
switch(info)
{
	case PTHREAD_INHERIT_SCHED:
		printf("\n schad\n");
		break;
	case PTHREAD_EXPLICIT_SCHED:
		printf("\n EXPLICIT\n");
		break;
}
//for explicite (own pro. and pri.)
pthread_attr_setinheritsched(&attr,PTHREAD_EXPLICIT_SCHED);
pthread_attr_getinheritsched(&attr,&info);
switch(info)
{
	case PTHREAD_INHERIT_SCHED:
		printf("\n schad\n");
		break;
	case PTHREAD_EXPLICIT_SCHED:
		printf("\n EXPLICIT\n");
		break;
}
pthread_create(&id,&attr,proc,NULL);
return 0;
}
