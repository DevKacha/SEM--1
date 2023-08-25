//check whether character
#include<stdio.h>
void main()
{
	char d;
	printf("enter any alphabet ");
	scanf("%c",&d);
	if(d=='a'||d=='e'||d=='i'||d=='o'||d=='u'||d=='A'||d=='E'||d=='I'||d=='O'||d=='U')
	{
		printf("d is vowel");
	}
	else
	{
		printf("d is consonent");
	}
}
