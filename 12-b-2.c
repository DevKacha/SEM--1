//Estimate the value of the mathematical constant e. (Formula: e=1+1/1!+1/2!+1/3!+1/4!....)
#include<stdio.h>
void main()
{
    int n;
    printf("enter value: ");
	scanf("%d",&n);
    double e = 1.0;
    double term = 1.0;

    for (n ; n <= 10; n++)
	{
        term /= n;
        e += term;
    }

    printf("Estimated e: %lf\n", e);
}
