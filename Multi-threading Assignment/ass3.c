
//3. Write a program that changes the default properties of newly created posix threads.(ex: to change default pthread stack size )
#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/mman.h>
#include<unistd.h>

void * proc(void* param)
{
sleep(2);
return 0;
}

int main()
{
	pthread_attr_t attribute;
	pthread_t id;
	void *st;
	size_t siz;
	int err;

	size_t stksize = 0x3000000;
	void * stack;

	pthread_attr_init(&attribute);

	pthread_attr_getstacksize(&attribute, &siz);
	pthread_attr_getstackaddr(&attribute, &st);

printf("defalut: addr=%08x def size=%d\n",st, siz);//defult

	stack = (void*)malloc(stksize);
	pthread_attr_setstack(&attribute, stack, stksize);
	pthread_create(&id, &attribute, proc, NULL);

	pthread_attr_getstack(&attribute, &st,&siz);
printf("defalut: addr=%08x def size=%d\n",st, siz);//modified

return 0;
}
