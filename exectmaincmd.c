#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
int main()
{
printf("befor");
execl("/home/tarang/linux basic/vfork1","./vfork1","tk","status",0);
printf("after");
}
