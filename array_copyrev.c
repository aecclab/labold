#include<stdio.h>

void main()
{
    int a[20],b[20],n,i;
    printf("enter the limit ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter the element ");
        scanf("%d",&a[i]);
    }
    
    printf("the elements of the array 'a' is ");
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\ncopying elements from array 'a' to array 'b' in reverse order");
    for (i=0;i<n;i++)
    {
        b[i]=a[n-1-i];
    }
    printf("\ncopied elements from array 'a' to array 'b'");
    printf("\nthe elements of the array 'b' is ");
    for (i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}