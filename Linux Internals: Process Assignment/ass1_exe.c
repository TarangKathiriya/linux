#include<stdio.h>
#include<unistd.h>

int main()
{
	execl("/bin/ls","ls","-lh",0);
printf("executed ls program");
return 0;
}

