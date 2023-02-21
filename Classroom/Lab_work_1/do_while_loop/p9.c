// WAP to calculate the factorial of N. using do while loop.

#include<stdio.h>

void main(){
    int fact=1,number,i=1;

    printf("Entre number = ");
    scanf("%d",&number);

    do
    {
        fact = fact * i;
        i++;
    } while (i<=number);
    printf("Factorial of %d is = %d ",number,fact);
}