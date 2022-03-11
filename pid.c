#include<stdio.h>
#include<unistd.h>
int main(void)
{
 printf("my pro pid= %d", getpid());
printf("my pepro pid= %d", getppid());
printf("linux kernal\n");
while(1);
return 0;
}
