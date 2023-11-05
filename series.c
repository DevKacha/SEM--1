//Print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 … n. 
#include<stdio.h>
void main()
{
	int i=1,N,sum=0;
	printf("enter any integer: ");
	scanf("%d",&N);
	while(i<=N)
	{
		if(i%2!=0)
		{
		sum=sum+i;
		}
		else
		{
	    sum=sum-i;
		}
		i++;
	}
	printf("ans= %d",sum);
}
