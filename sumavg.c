#include<stdio.h>
void main()
{
	int sum=0,x=1,limit;
	float avg;
	printf("enter the limit\n");
	scanf("%d",&limit);
	for (x=1;x<=limit;x++)
	{
		sum+=x;
	}
	/*(x<=limit)
	{
		sum+=x;
		x+=1;
	}*/
	avg = sum/limit;
	printf("the sum of the first 5 natural numbers is %d and the average is %f",sum,avg);
	
}
