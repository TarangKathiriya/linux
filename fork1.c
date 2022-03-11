#include<stdio.h>
#include<unistd.h>

int main(void)
{
int pid_1;
printf("current pro pid =%d\n", getpid());
pid_1 = fork();
if(pid_1==0)
{
	//sleep(5);
	printf("new childe pro pid =%d\n", getpid());
	printf("new childe parentpro pid =%d\n", getppid());
}
else{
	//sleep(3);
	printf("parent pro pid =%d\n", getpid());
	printf("parent  parentpro pid =%d\n", getppid());
}
while(1);
return 0;
}
