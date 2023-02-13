// WAP to Find max. from 3 using ternary operator.

#include<stdio.h>

void main(){
    int num1,num2,num3,max;
    printf("Enter three number = ");
    scanf("%d %d %d",&num1,&num2,&num3);

    max = (num1>num2)?(num1>num3?num1:num3):(num2>num3?num2:num3);

    printf("%d is a maximum number",max);
}