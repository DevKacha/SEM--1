//Get 10 numbers from user print count of odd, even numbers.
#include<stdio.h>
void main()
{
	int n,i=1,countodd=0,counteven=0;
	while(i<=10)
	{
		scanf("%d",&n);
		if(n%2==0)
		{
		     counteven=counteven+n;
		}
		else
		{
			countodd=countodd+n;
		}
		i++;
	}
	printf("%d",counteven);
	printf("%d",countodd);
}

