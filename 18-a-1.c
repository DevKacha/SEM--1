//Add two numbers using function.
#include<stdio.h>
void add(int,int);
void main()
{
    int a,b;
	printf("enter a value: ");
	scanf("%d %d",&a,&b); 
	add(a,b);
}
	void add(int a,int b)
	{	
	printf("%d",a+b);
    }

