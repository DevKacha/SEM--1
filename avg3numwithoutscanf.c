//print of avg num without scanf
#include<stdio.h>

void main()
{
	int a,b,c,avg;
	printf("print an integer value: ");
	scanf("%d",&a);
	printf("print an integer value: ");
	scanf("%d",&b);
	printf("print an integer value: ");
	scanf("%d",&c);
	avg=(a+b+c)/3.0;
	printf("avg is =%d",avg);
}
