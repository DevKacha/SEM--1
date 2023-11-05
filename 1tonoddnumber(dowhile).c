////print 1 to n odd number (dowhileloop)
#include<stdio.h>
void main()
{
		int i,n=1;
	printf("enter a number: ");
	scanf("%d",&i);
	do
	{
		printf("%d\n",n);
		n=n+2;
	}
	while(n<=i);
}
