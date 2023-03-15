// C program to reverse an array using pointers

#include<stdio.h>

void main(){

    int n,a[n],i;
    int *p;
    p = &a[n-1];

    printf("Enter size of an array = ");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\n",*p--);
    }

}