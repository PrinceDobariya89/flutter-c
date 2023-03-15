// WAP to swap two variables using Pointer.

#include<stdio.h>

void main(){
    int a,b,c;
    int *x = &a;
    int *y = &b;
    
    printf("Enter value of a = ");
    scanf("%d",&a);
    printf("Enter value of b = ");
    scanf("%d",&b);
    
    printf("Before swap number is = %d\n",a); 
    printf("Before swap number is = %d\n",b); 

    c = *x;
    *x = *y;
    *y = c;

    printf("After swap number is = %d\n",a); 
    printf("After swap number is = %d\n",b); 
}