// C program to input and print array elements using pointers

#include<stdio.h>

void main(){
    int n,i,a[n];
    int *p = a;
    printf("Enter size of an array");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("Array elements of a[%d] is = %d\n",i,p[i]);
    }
    

    
}