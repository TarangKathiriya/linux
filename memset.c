#include<stdio.h>
#include<string.h>

int main()
{
	const char str[] = "linuxkernal.com";
	const char ch = '#';

	printf("string before is %s\n", str);
	memset(str, ch, strlen(str));
	printf("string after is %s\n", str);
	
	
return 0;
}
