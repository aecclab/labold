#include<stdio.h>
void main()
{
	int x;
	printf("enter the number for the day\n");
	scanf("%d",&x);
	switch (x)
	{
		case 1 : printf("the day is sunday\n");
			break;
		case 2 : printf("the day is monday\n");
			break;
		case 3 : printf("the day is tuesday\n");
			break;
		case 4 : printf("the day is wednesday\n");
			break;
		case 5 : printf("the day is thursday\n");
			break;
		case 6 : printf("the day is friday\n");
			break;
		case 7 : printf("the day is saturday\n");
			break;
		default : printf("invalid option\n");
			break;
	}
}
