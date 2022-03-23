#include<stdio.h>
#include<stdlib.h>
struct student
{
	int roll;
	char name[40],gender;
	float height;
}first;
int main()
{
	struct student second;
	struct student third = {103,"hari parasad d.",'m',5.11};
	printf("\n roll\tname\t\t\t\t\tgender\thight\n");
	first.roll=101;
	strcpy(first.name,"phaneendra kumar p");
	first.gender='m';
	first.height=5.6;
	printf("\n %3d\t%-40s\t%c\t%1.2f",first.roll,first.name,first.gender,first.height);
	printf("\n %3d\t%-40s\t%c\t%1.2f",third.roll,third.name,third.gender,third.height);
return 0;
}
