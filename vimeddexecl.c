#include<stdio.h>
#include<unistd.h>
int main()
{
int ret;
ret = execl("/usr/bin/vim","vim","info1.text",0);
if(ret=-1);
printf("error");
}
