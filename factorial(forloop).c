//Find factorial of the given number.
#include<stdio.h>
void main()
{
	int n,i=1,fac=1;
	printf("enter a value: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("ans= %d",fac);
}
