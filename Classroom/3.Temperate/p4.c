// Write C program to find sum of first and last digit of a number.

#include<stdio.h>

void main(){
    int first_digit,last_digit,sum = 0,number;

    printf("Enter a number = ");
    scanf("%d",&number);

    last_digit = number % 10;
    
    while (number>=10)
    {
        number = number / 10;
    }    
    first_digit = number ;
    sum = last_digit + first_digit;
    printf("%d",sum);
}
