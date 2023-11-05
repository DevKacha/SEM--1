//Check whether character is an alphabet or not using conditional operator.
#include<stdio.h>
void main()
{
	char ch;
	printf("enter a character: ");
	scanf("%c",&ch);
	(ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')?printf("enter a character is alphabet"):printf("enter a character is not alphabet");
}
