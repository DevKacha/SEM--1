//Check whether the given number is palindrome or not.
#include<stdio.h>
void main()
{
	int n,temp;
	printf("enter a value: ");
	scanf("%d",&n);
	int num=n;
	while(n>0)
	{
		temp=(temp*10)+(n%10);
		n=n/10;
	}
	if(num==temp)
	{
		printf("value is palindrome");
	}
	else
	{
		printf("value is not palindrome");
	}
}
