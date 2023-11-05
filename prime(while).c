//Find whether the given number is prime or not.
#include<stdio.h>
void main()
{
	int n,i=2,count=0;
	printf("enter a value: ");
	scanf("%d",&n);
	while(i<=n/2)
	{
		if(n%i==0)
		{
			count=count+1;
		}
		i++;
	}
	if(count!=0)
	{
		printf("not prime");
	}
	else
	{
		printf("prime");
	}
}
