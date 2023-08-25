//simple interest
#include<stdio.h>

void main()
{
	float p,n,r,si;
	printf("enter p of simple interest ");
	scanf("%f",&p);
	printf("enter n of simple interest ");
	scanf("%f",&n);
	printf("enter r of simple interest ");
	scanf("%f",&r);
	si=(p*n*r)/100;
	printf("simple interest=%f",si);
}
