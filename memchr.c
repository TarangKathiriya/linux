#include<stdio.h>
#include<string.h>

int main()
{
	const char str[] = "linuxkernal.com";
	const char ch = '.';
	char *ret;

	printf("string before is %s\n", str);
	ret = memchr(str, ch, strlen(str));
	printf("string after **%c** is %s\n",ch, ret-7);// ret-7 = goto -7 potitions form . and print all char avalible that point andafter that point
	printf("string after **%c** is %s\n",ch, ret+2);
	
	
return 0;
}
