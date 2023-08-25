#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("enter the value of a&b: ");
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("value of a=%d,b=%d",a,b);
}
