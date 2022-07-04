#include<stdio.h>
void main()
{
	float a,b,c,d,e,avg;
	printf("enter the five marks out of 100 \n");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	avg = (a+b+c+d+e)/5;
	if (avg>=80&&avg<=100)
	{
		printf("the average is %f and the grade is 'honors'",avg);
	}
	else if(avg>=60&&avg<80)
	{
		printf("the average is %f and the grade is 'first class'",avg);
	}
	else if(avg>=50&&avg<60)
	{
		printf("the average is %f and the grade is 'second class'",avg);
	}
	else if(avg>=40&&avg<50)
	{
		printf("the average is %f and the grade is 'third class'",avg);
				
	}
	else
	{
		printf("the average is %f and the grade is 'fail'",avg);
	}
}

