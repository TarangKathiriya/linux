// 1.Test whether the process(exec() system call) that replaces old program data , will inherit the fds or not.
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fd;
	fd = open("./exe",O_RDONLY);
	printf("file descriptor of a open system call is %d\n", fd);
return 0;
}
