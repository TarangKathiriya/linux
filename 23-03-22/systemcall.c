#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char buff_com[5];
	strcpy(buff_com,"ls -l");
 int x ;

	printf("system() libtrary fuction uses fork() to creat child process\n");
	printf("child process executes execl() which loads and run new program provided by ayatem() argument\n");
	//system(buff_com);
 	 x = system(NULL);
	printf("x %d ", x);
return 0;
}
