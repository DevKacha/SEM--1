//Print day name of week using switch.
#include<stdio.h>

void main()
{
	int day;
	printf("enter the value between 1 to 7: ");
	scanf("%d",&day);
	switch(day)
    {
	case 1:printf("monday");
	break;
	case 2:printf("tuesday");
	break;
	case 3:printf("wedensday");
	break;
	case 4:printf("thursday");
	break;
	case 5:printf("friday");
	break;
	case 6:printf("saturday");
	break;
	case 7:printf("sunday");
	break;
	default:("enter a value is invalid");
	break;
    }
}
