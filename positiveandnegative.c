//numbers is positive and negative
#include<stdio.h>
void main()
{
	int n;
	printf("enter the value");
	scanf("%d",&n);
	if(n>0)
	{
		printf("entered number is positive");
		scanf("%d",&n);
    }
    else
    {
    	printf("entered number is negative");
    	scanf("%d",&n);
	}
}
