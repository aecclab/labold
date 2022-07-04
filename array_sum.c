#include<stdio.h>

void main()
{
    int a[20],n,i,sum=0;
    printf("enter the limit ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter the element ");
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("the elements of the array is ");
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nthe sum of the elements of the array is %d",sum);
}