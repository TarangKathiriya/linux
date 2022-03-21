#include<stdio.h>
#include"addsub.h"
int main()
{
int a,b ,c,d;
a=10;
b=20;
c=sub(a,b);
d=add(a,b);
printf("add is %d", d);
printf("sub is %d",c);
}

