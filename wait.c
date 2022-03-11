#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(void)
{
 pid_t pid_1;//pid_t data types for pids

pid_1 = fork();
if(pid_1==0)
{
	sleep(5);
	printf("new childe with delay 5secand child pro pid =%d\n", getpid());
	
}
else{
	int pid2;
	printf("i am parent pro pid=%d", getpid());
	pid2 = wait(0);
printf("parent saying child %d terminate normally\n",pid2);
printf("i am parent process pr pid=%d\n",getpid());
}

return 0;
}
