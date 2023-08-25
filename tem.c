//print tem from fah to celsius 
#include<stdio.h>

void main()
{
	float c,f;
	printf("enter temperture in fahrenheit ");
	scanf("%f",&f);
	c=(((f-32)*5)/9);
	printf("temperture in celsius=%f",c);
}
