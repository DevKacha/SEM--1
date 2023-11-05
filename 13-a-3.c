//     *
//    * *
//   * * *
//  * * * *
// * * * * *
#include<stdio.h>
void main()
{
	int i,j,k;
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=2*i-1;j++)
		{
			if(j%2==1)
			{
				if(j%2==0)
				{
					printf(" ");
				}
				else
				{
					printf(" ");
				}
			}
			else
			{
				printf("*");
			}
        }
		printf("\n");
	}
}
