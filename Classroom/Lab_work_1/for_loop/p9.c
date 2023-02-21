// WAP to calculate the factorial of N. using for loop.

#include<stdio.h>

void main(){
    int i,fact=1,number;

    printf("Enter number = ");
    scanf("%d",&number);

    for (i = 1; i <= number; i++)
    {
        fact*=i;
    }
    printf("%d",fact);
    
}