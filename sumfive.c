#include<stdio.h>
void main()
{
	int sum=0,x=1;
	/*for (x=1;x<=5;x++)
	{
		sum+=x;
	}
	printf("the sum of the first 5 natural numbers is %d",sum);*/
	/*while(x<=5)
	{
		sum+=x;
		x+=1;
	}
	printf("the sum of the first 5 natural numbers is %d",sum);*/
	do
	{
		sum+=x;
		x+=1;
	}while(x<=5);
	printf("the sum of the first 5 natural numbers is %d",sum);
	
	
}
