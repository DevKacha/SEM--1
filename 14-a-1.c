//Read n numbers from user and print in normal and reverse order.
#include<stdio.h>
void main()
{
	int n,i=0;
    printf("enter a element: " );
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
}
