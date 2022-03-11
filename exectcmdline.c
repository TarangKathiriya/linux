#include<stdio.h>
int main(int argc,char *argv[])
{
int i;
printf("\n file name %s\n",argv[0]);
printf("\ntotal number of arguments %d", argc);
printf("arrguments pass ");

for(int i=0;i<argc;i++)
printf("%s",argv[i]);
printf("\n");
}
