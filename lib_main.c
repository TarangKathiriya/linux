#include<stdio.h>
#include"clac_mean.h"

int main(int argc, char *argv[])
{
	double v1, v2, m2, m1;
	v1 = 5.2;
	v2 = 7.9;
	m1=mean(v1,v2);
	m2=sub(v1,v2);
	printf("the mean of %3.3f and %3.2f is %3.2f\n",v1,v2,m1);
	printf("the sub of %3.3f and %3.2f is %3.2f\n",v1,v2,m2);
	return 0;
}

	