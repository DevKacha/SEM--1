//Count number of even or odd number from an array of n numbers.
#include<stdio.h>
void main()
{
	int n,i=0,even=0,odd=0;
    printf("enter a element: " );
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("%d %d",even,odd);
}
