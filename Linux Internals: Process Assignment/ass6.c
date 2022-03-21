#include<stdio.h>
#include<unistd.h>

int main(void)
{
int pid_1 ;
printf("current pro pid =%d\n", getpid());
pid_1 = fork();
if(pid_1==0)
{
	
	printf("new child pro pid_1 =%d\n", getpid());
	printf("new child parentpro pid_1 =%d\n", getppid());
	execl("/home/tarang/linux basic/ass/process_ass/task1","task1",NULL);
	
}
else{
	
	wait(0);
	printf("parent pro pid =%d\n", getpid());
	printf("parent  parentpro pid =%d\n", getppid());
	printf("child complete\n");
}
while(1);
return 0;
}
