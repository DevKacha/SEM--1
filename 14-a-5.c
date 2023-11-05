//Read five person height and weight and count the number of person having height greater
//than 170 and weight less than 50.
#include<stdio.h>
void main()
{
	int h[5],w[5],i,count;
	for(i=0;i<5;i++)
	{
		printf("enter %d parsons details:\n",i+1);
		printf("height: ");
		scanf("%d",&h[i]);
		printf("weight: ");
		scanf("%d",&w[i]);
	}
	for(i=0;i<5;i++)
	{
		if(h[i]>170&&w[i]<50)
		{
			count++;
		}
	}
	printf("no. of persons are:%d",count);
}
