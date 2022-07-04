#include<stdio.h>

void main()
{
    int a[20],temp,n,i,j;
    printf("enter the limit ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter the element ");
        scanf("%d",&a[i]);
    }
    
    printf("the array is ");
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nsorting array is descending order");
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nsorted array in descending order");
    printf("\nthe sorted array is ");
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}