//Calculate x^y without using power function.
#include<stdio.h>
void main(){
	int x,y,i=1,ans=1;
	printf("enter a value: ");
	scanf("%d",&x);
	printf("enter a value: ");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		ans=ans*x;
	}
	printf("ans=%d",ans);
}
