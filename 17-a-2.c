//Demonstrate int, float, double and char pointer.
#include<stdio.h>
void main()
{
	char ch,*c;
	printf("enter a char: ");
	scanf("%d",&ch);
	*c=&ch;
	printf("%c %d",*c,c);
}
