#include<stdio.h>
void main()
{
	float bs,bonus;
	printf("enter the basic salary \n");
	scanf("%f",&bs);
	if (bs<10000)
	{
		bonus = bs*10/100;
	}
	else if(bs>=10000&&bs<=30000)
	{
		bonus = bs*15/100;
	}
	else if(bs>30000)
	{
		bonus = bs*20/100;
	}

	printf("the basic salary is %.2f and the bonus is %.2f",bs,bonus);
}
