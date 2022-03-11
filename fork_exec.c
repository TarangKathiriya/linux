#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>

int main(void)
{
 pid_t pid_1;//pid_t data types for pids

pid_1 = fork();
if(pid_1==0)
{
	execl("/bin/ls","ls",NULL);
	
}
else{
	wait(NULL);
printf("child comple");
exit(0);
}

return 0;
}
