// C program to find Sum of all Array Elements by passing array as an argument using User Define Functions.

#include<stdio.h>

int sum(int x,int y[]);

void main(){
    int n,i,a[n];
    printf("enter size of array = ");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Sum of array is = %d",sum(n,a));
}

int sum(int x, int y[])
{
    int sum = 0,i;
    for ( i = 0; i < x; i++)
    {
        sum += y[i];
    }
    return sum;
}
