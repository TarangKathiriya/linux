#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int i;
	printf("\n file name: %s\n",argv[0]);
	printf("\n total number of argumnets %d",argc);
	printf("\n arguments passed:");
	for(i=1;i<argc;i++)
		printf("%s",argv[i]);
	printf("\n");
}
