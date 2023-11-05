//Return the maximum of three floating-point numbers.
#include<stdio.h>
float max(float,float,float,float);
void main()
{
	float a,b,c,res,maximun;
	printf("enter a value: ");
	scanf("%f %f %f",&a,&b,&c);
	maximun= max(a,b,c,res); 
    printf("%f",maximun);
}
float max(float a,float b,float c,float res)
{
	res=(a>b)?((a>c?a:c)):((b>c?b:c));
    return res;
}


