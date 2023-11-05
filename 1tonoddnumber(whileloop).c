//print 1 to n odd number (whileloop)
#include<stdio.h>
void main()
{
		int i,n=1;
	printf("enter a number: ");
	scanf("%d",&i);
	while(n<=i)
	{
		printf("%d\n",n);
		n=n+2;
	}
	
}

