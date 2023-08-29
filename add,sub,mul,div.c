//perform add, sub, mul ,div
#include<stdio.h>

void main()
{
	int choice;
	float a,b,add,sub,mul,div;
	printf("enter the value of a and b: ");
	scanf("%f %f",&a,&b);
	printf("1.addition,2.subtraction,3.multiplication,4.division");
	printf("enter your choice: ");
	scanf("%d",&choice);
	if(choice==1)
	{
		add=a+b;
		printf("addition=%f",add);
	}
	else if(choice==2)
	{
		sub=a-b;
		printf("subtraction=%f",sub);	
	}
	else if(choice==3)
	{
		mul=a*b;
		printf("multiplication=%f",mul);
	}
	else if(choice==4)
	{
		div=a/b;
		printf("division=%f",div);
	}
	else
	{
		printf("enter the valid number");
	}
}
