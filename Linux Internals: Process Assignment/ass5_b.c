//5.Write a program, where functions of the program are called in the reverse order of their function calls from main().
#include<stdio.h>
#include<stdlib.h>


void callback1(void)
{
printf("call back 1\n");
}
void callback2(void)
{
printf("call back 2\n");
}
void callback3(void)
{
printf("call back 3\n");
}
int main()
{
	printf("registering callback1\n");
	atexit(callback1);
	printf("registering callback2\n");
	atexit(callback2);
	printf("registering callback3\n");
	atexit(callback3);
printf("main().. exiting now\n");
exit(0);
//_exit(0); // not execute atexit functions
}
	
