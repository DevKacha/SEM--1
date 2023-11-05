//printf 1 to n number (whileloop)
#include<stdio.h>
void main()
{
	int i,n=1;
	printf("enter a number: ");
	scanf("%d",&i);
	while(n<=i)
	{
		printf("%d\n",n);
		n=n+1;
	}
	
}
