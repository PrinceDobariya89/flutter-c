// WAP to Find max. from 5 using ternary operator.

#include<stdio.h>

void main(){
    int num1,num2,num3,num4,num5,max;
    printf("Enter five number = ");
    scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);

    max = (num1>num2&&num1>num3&&num1>num4&&num1>num5)?num1:(num2>num3&&num2>num4&&num2>num5?num2:(num3>num4&&num3>num5?num3:(num4>num5?num4:num5)));

    printf("%d is a maximum number",max);

}