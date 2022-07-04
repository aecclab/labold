#include<stdio.h>
void main()
{
	int num1,num2,result,option;
	printf("enter two numbers\n");
	scanf("%d%d",&num1,&num2);
	printf("1.multiplication\n2.reminder\n3.division\n\n");
	scanf("%d",&option);
	switch (option)
	{
		case 1 : result = num1*num2;
			printf("the product of %d and %d is %d",num1,num2,result);
			break;
		case 2 : result = num1%num2;
			printf("the reminder of %d when divided by %d is %d",num1,num2,result);
			break;
		case 3 : result = num1/num2;
			printf("the result of %d / %d is %d",num1,num2,result);
			break;
		default : printf("invalid option");
			break;
	}
}
