//1 A 2 B 3
// 4 C 5 D
//  6 E 7
//   8 F
//    9
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(j%2!=0)
			{
			    printf(" ");
		    }
		    else
		    {
		    	printf("*");
			}
		}
		printf("\n");
	}
}   
