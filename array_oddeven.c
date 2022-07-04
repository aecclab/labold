#include<stdio.h>

void main()
{
    int a[20],n,i,sum_odd=0,sum_even=0;
    printf("enter the limit ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter the element ");
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]%2==0)
        {
            sum_even+=a[i];
        }
        else
        {
            sum_odd+=a[i];
        }
    }
    printf("the elements of the array is ");
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nthe sum of the odd elements of the array is %d and the sum of even elements in the array is %d",sum_odd,sum_even);
}