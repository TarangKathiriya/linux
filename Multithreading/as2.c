//2.Write a program where a structure of information passed to pthread task function, and display structure of information.
#include<pthread.h>
#include<stdio.h>
#include<unistd.h>
#include <stdlib.h>


struct employee
{
	int id;
	char name[30];
};


void * td()
{
	struct employee e1;
	printf("enter employee id and name : ");
	scanf("%d %s",&e1.id,e1.name);

	printf("employee id: %d name: %s",e1.id,e1.name);	
}

int main()
{
	pthread_t tid;
	int ret= pthread_create(&tid,NULL,td,NULL);
	
	pthread_join(tid,NULL);
	return 0;
}
