// WAP to Swap two variables (with sing third variable).

#include<stdio.h>

void main(){
    int a=10,b=20,c;

    printf("\nBefore swap the value a = %d",a);
    printf("\nBefore swap the value b = %d",b);

    c=a;
    a=b;
    b=c;

    printf("\nAfter swap the value a = %d",a);
    printf("\nAfter swap the value b = %d",b);

}