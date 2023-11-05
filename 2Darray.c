//2D array
#include<stdio.h>
void main()
{
	int arr[2][3];
	int i,j,n=1;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(i=0;i<=j;i++)
			{
			
				n=n++;
			}
	    	printf("enter a element into arr[%d][%d]= ",i,j);
		    scanf("%d",&arr[i][j]);
	    }
	}
}
