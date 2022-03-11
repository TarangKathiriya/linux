#include<stdio.h>
#include<unistd.h>

int main(void)
{
int pid, status;
printf("parent pro pid =%d\n", getpid());
pid = fork();
if(pid==0)
{
	//sleep(5);
	printf("childe  =%d\n", getpid());
        sleep(5);
exit(0);
	
}
printf("parent report exit of child whos pid= %d\n",waitpid(pid, &status,0));
return 0;
}
