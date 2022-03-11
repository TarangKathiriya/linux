#include<stdio.h>
#include<unistd.h>

int main(void)
{
int pid_1;
printf("current pro pid =%d\n", getpid());
pid_1 = vfork();
if(pid_1)
{
	printf("parent pro pid =%d\n", getpid());
	printf("parent  parentpro pid =%d\n", getppid());
	
}
else{
sleep(3);
	printf("new childe pro pid =%d\n", getpid());
	printf("new childe parentpro pid =%d\n", getppid());
}
exit(0);
return 0;
}
