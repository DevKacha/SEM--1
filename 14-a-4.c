//Find Max, Min, Sum, Avg. of given numbers from an array.
#include<stdio.h>
void main()
{
	int n,i=0,sum=0,max=0,min=0;
	float avg=0;
    printf("enter a element: " );
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
		if(max<arr[i])
		{
			max++;
		}
		if(min>arr[i])
		{
			min++;
		}
	}
	printf("%d %d %d",sum,max,min);
	printf(" %f",avg);
}
