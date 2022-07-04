#include<stdio.h>

void main()
{
    int a[20],n,i,largest;
    printf("enter the limit ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter the element ");
        scanf("%d",&a[i]);
    }
    largest=a[0];
    for (i=0;i<n;i++)
    {
        if (a[i]>largest)
        {
            largest=a[i];
        }
    }
    printf("the elements of the array is ");
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nthe largest element of the array is %d",largest);
}