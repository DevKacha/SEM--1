//swap two numbers without temp
#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the value of a&b: ");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("value of a=%d,b=%d",a,b);
}
