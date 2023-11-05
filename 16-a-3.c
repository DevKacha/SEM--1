//Read and store the roll no and marks of 20 students using 2D array.
#include<stdio.h>
void main()
{
	int roll[5][4],marks[5][4],i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d %d",&roll[i][j],&marks[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
		    printf("%d\t%d\n", roll[i][j], marks[i][j]);
		}
	}
}
