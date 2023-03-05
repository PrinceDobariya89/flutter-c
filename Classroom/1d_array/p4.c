// WAP to find peform addition of 1D array & store it into another.

#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],b[50],c[50],i,n;
    printf("Enter the size of an array is = \n");
    scanf("%d",&n);

    printf("\nEnter the elements of a is = \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the elements of b is = \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("\nSum of two array is = \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
}