#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char *str1 = "linux";
	char *str2 ="kernal";
	char *name = (char *)alloca(strlen(str1)+strlen(str2)+1);
stpcpy(stpcpy(name, str1),str2);
//strcpy(name,str1);
//strcat(name,str2);
printf("the copied string data is %s\n",name);
return 0;
}
