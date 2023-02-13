// WAP to Swap two variables (without using third variable)

#include<stdio.h>

void main(){
    int a=10,b=20;

    printf("\nBefore swap the value a = %d",a);
    printf("\nBefore swap the value b = %d",b);

    a=b;
    b=a-10;

    printf("\nAfter swap the value a = %d",a);
    printf("\nAfter swap the value b = %d",b);

}