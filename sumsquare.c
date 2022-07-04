#include<stdio.h>
void main()
{
	int sum=0,limit,x;
	printf("enter the limit\n");
	scanf("%d",&limit);
	for (x=1;x<=limit;x+=1)
	{
		sum+=x*x;
	}
	printf("the sum of the square of the first %d natural numbers is %d",limit,sum);
	
}
