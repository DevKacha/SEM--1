//Count number of positive or negative number from an array of n numbers.
#include<stdio.h>
void main()
{
	int n,i=0,pos=0,nag=0;
    printf("enter a element: " );
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			pos++;
		}
		else
		{
			nag++;
		}
	}
	printf("%d %d",pos,nag);
}
