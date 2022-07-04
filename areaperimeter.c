#include<stdio.h>
void main()
{
	float length,breadth,area,perimeter;
	printf("enter the length and breadth of the rectangle \n");
	scanf("%f %f",&length,&breadth);
	area = length*breadth;
	perimeter = 2*(length+breadth);
	printf("the perimeter of the rectangle is %f and the area is %f \n",perimeter,area);
}
