#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c; // some integers
int *pi;     // a pointer to an integer

a = 5;
pi = &a; // pi points to a
b = *pi; // b is now 5
pi = NULL;
c = *pi; // this is a NULL pointer dereference
printf("value at pi %d", c);
}
