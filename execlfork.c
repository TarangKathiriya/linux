#include<stdio.h>
#include<unistd.h>

int main(void)
{
pid_t pid;
int option, stat;


while(1)
{
	printf("entyer 1 for execcl");
	scanf("%d",&option);
	if(!option)
		exit(0);
printf("\n");
if(fork()==0)
{
	//sleep(5);
		execl("/home/tarang/linux basic/vfork1","./vfork1",0);
	exit(0);
        
}
}


return 0;
}
