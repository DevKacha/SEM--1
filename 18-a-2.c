//Find maximum and minimum between two numbers using function.
#include<stdio.h>
void maxmin(int,int);
void main()
{
    int a,b;
	printf("enter a value: ");
	scanf("%d %d",&a,&b); 
	maxmin(a,b);
}
	void maxmin(int a,int b)
	{	
	  if(a>b)
	  {
	  	printf("max=%d min=%d",a,b);
	  }
	  else
	  {
	  	printf("min=%d max=%d",a,b);
	  }
    }
