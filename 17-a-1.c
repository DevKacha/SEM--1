//Print value and address of a variable.
#include<stdio.h>
void main()
{
	int n,*ptr;
	printf("enter a variable: ");
	scanf("%d\n",&n);
	ptr=&n;
	printf("%d\n",ptr);
	printf("%d\n",*ptr);
}
