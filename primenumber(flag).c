//Find whether the given number is prime or not(flag).
#include<stdio.h>
void main()
{
	int n,i=2,flag=0;
	printf("enter a value: ");
	scanf("%d",&n);
	while(i<=n/2)
	{
		if(n%i==0)
		{
			flag=1;
		}
		i++;
	}
	if(flag==1)
	{
		printf("not prime");
	}
	else
	{
		printf("prime");
	}
}
