// WAP to Find max. from given 2 no. using ternary operator.

#include<stdio.h>

void main(){
    int a,b,max;

    printf("Enter 1st number = ");
    scanf("%d",&a);
    printf("Enter 2nd number = ");
    scanf("%d",&b);

    a>b?printf("a is maximum"):printf("b is maximum");
}