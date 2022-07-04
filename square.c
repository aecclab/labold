#include<stdio.h>
#include<math.h>
void main()
{
	float number,result;
	printf("enter a number ");
	scanf("%f",&number);
	if (number>0)
	{
		result = sqrt(number);
		printf("the square root of %f is %f \n",number,result);
	}
}
