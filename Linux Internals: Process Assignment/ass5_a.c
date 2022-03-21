//5.Write a program parent process wait untill ,while child process open a file and read file data into empty buffer.
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{

	int pid, fd;
	pid = fork();
	if(pid==0)
	{
	fd = open("ass5.txt",O_CREAT | O_RDWR,0777);
	char wr[] = "first line of this file is this";
	int len = strlen(wr);
	write(fd,wr,len);
	char buff[len];
	read(fd,buff,len);
	}
	else
	{
	wait(0);
	printf("parent process\n");
	}
return 0;
}
