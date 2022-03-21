#include<stdio.h>
#include<string.h>

void my_memcpy(char *buf1,char *buf2,int size)
{
	for(int i=0;i<size;i++)
{
	//buf2[i]=buf1[i];
	*buf2=*buf1;
buf1++;
buf2++;
}
}

int main()
{
	const char buf1[10]="madam";
	const char buf2[10];
	
	//memcpy(buf1,"madam",5);

	my_memcpy(buf1,buf2,6);
printf("buf2 is %s",buf2);
return 0;
}
