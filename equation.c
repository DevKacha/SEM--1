//Determine the roots of the equation ax^2+bx+c=0.
#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,r1,r2;
	printf("enter a value of a,b,c: ");
	scanf("%f %f %f",&a,&b,&c);
	if(b*b>=4*a*c)
	{
		r1=((-b)+(sqrt(b*b-4*a*c))/2.0*a);
		r2=((-b)-(sqrt(b*b-4*a*c))/2.0*a);
		printf("r1 and r2 = %f %f",r1,r2);
	}
	else 
	{
		printf("enter a value is invalid");
	}
		
}

