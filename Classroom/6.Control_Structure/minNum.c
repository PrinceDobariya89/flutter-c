// WAP to Find min. no. from given 2 no. using if else.

#include<stdio.h>

void main(){
    int a,b;
    printf("Enter 1st number a = ");
    scanf("%d",&a);
    printf("Enter 2nd number b = ");
    scanf("%d",&b);

    if (a<b)    
    {
        printf("a is minimum");
    }else if (b<a)
    {
        printf("b is minimum");
    }
    else
    {
        printf("a and b both are same");
    }
}