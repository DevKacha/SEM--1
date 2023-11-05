//Print given number in reverse order.
#include<stdio.h>
void main()
{
    int n,temp;
    printf("enter a value: ");
    scanf("%d",&n);
    while(n>0)
    {
    	temp=n%10;
    	printf("%d",temp);
    	n=n/10;
    }
}
