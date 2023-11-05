//Count number of positive, negative and zero elements from 3 X 3 matrix.
#include<stdio.h>
void main()
{
	int a[3][3],i,j,pos=0,nag=0,zero;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter a element : ");
			scanf("%d",&a[i][j]);
			if(a[i][j]>0)
			{
				pos++;
			}
			else if(a[i][j]<0)
			{
				nag++;
			}
			else
			{
				zero++;
			}
			
		}
	}
	printf("pos=%d nag=%d zero=%d",pos,nag,zero);
}

