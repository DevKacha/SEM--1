//Print all uppercase and lowercase alphabets.
#include<stdio.h>
void main()
{
	char upper='A',lower='a';
	while(upper<='Z')
	{
		printf("%c ",upper);
		upper++;
	}
	printf("\n");
	while(lower<='z')
	{
		printf("%c ",lower);
		lower++;
	}
}
