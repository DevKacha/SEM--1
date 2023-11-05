//Find out sum of first and last digit of a given number.
#include<stdio.h>
void main()
{
	int n,last;
	printf("enter a number: ");
	scanf("%d",&n);
	last=n%10;
    while(n>10)
    {
    	n=n/10;
	}
	printf("sum of first and last = %d",last+n);
}
