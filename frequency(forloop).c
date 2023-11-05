//Count frequency of digits in an integer.
#include<stdio.h>
void main(){
	int n,i=1,count=0;
	printf("enter a value: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		n=n/10;
		count++;
	}
	printf("%d",count);
}
