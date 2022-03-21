// 2.Write a program such that parent process create two child processes,such that
#include<stdio.h>
#include<unistd.h>

int main(void)
{
int pid_1 ,pid_2;
printf("current pro pid =%d\n", getpid());
pid_1 = fork();
pid_2 = fork();
if(pid_1==0)
{
	//sleep(5);
	//printf("new child pro pid_1 =%d\n", getpid());
	//printf("new child parentpro pid_1 =%d\n", getppid());
 	printf("\n---------------------------------------------\n");
	execl("/home/tarang/linux basic/ass/process_ass/task1","task1",NULL);
	
}
else if(pid_2==0)
{
	//printf("new child pro pid_2=%d\n", getpid());
	//printf("new child parentpro pid_2 =%d\n", getppid());
	printf("\n---------------------------------------------\n");

	execl("/home/tarang/linux basic/ass/process_ass/task","./task",NULL);
	
}

else{
	sleep(3);
	wait(NULL);
	//printf("parent pro pid =%d\n", getpid());
	//printf("parent  parentpro pid =%d\n", getppid());
printf("child complete\n");
}
while(1);
return 0;
}
