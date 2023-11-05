//Count simple interest using function.
#include<stdio.h>
void si(float,float,float);
void main()
{
	float a,b,c;
	printf("enter a value: ");
	scanf("%f %f %f",&a,&b,&c);
	si(a,b,c); 
}
void si(float a,float b,float c)
{
	printf("%f",a*b*c/100);
}
