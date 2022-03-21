//4.A processs using execl() system call should replace a new command line program.
#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("before execl \n");

	execl("/home/tarang/linux basic/ass/process_ass/task1","task1",NULL);

	printf("if error in execl then this print\n");
return 0;
}
