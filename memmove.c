#include<stdio.h>
#include<string.h>
int main()
{
	char dest[] = "old string";
	const char src[]= "new string";

	printf("before memmove dest %s,src - %s\n",dest,src);
	memmove(dest,src,9);
	printf("after memmove dest %s,src - %s\n",dest,src);
return 0;
} 
