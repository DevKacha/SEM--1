//Print numbers between two given numbers which is divisible by 2.
#include<stdio.h>
void main()
{
	int n1,n2;
	printf("enter a number of n1,n2: ");
	scanf("%d %d",&n1,&n2);
	while(n1<=n2)
	{
		if(n1%2==0)
		{
		printf("\n%d",n1);
	    }
		n1=n1+1;
	}
}
