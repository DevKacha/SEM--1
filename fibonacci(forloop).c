//Print the Fibonacci Series.
#include<stdio.h>
void main(){
	int n,i,a=0,b=1,c;
	scanf("%d",&n);
	printf("0 1 ");
	for(i=3;i<=n;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
}
