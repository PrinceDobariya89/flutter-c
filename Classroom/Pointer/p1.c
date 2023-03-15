// WAP to find square of each element using Pointer.

#include<stdio.h>

void main(){
    int n,i,a[n];
    printf("Enter size of array = ");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int *p = &a;

    for ( i = 0; i < n; i++)
    {
        printf("%d ",p[i]*p[i]);
    }
}