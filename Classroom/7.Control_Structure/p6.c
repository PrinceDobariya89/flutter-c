// WAP to Find max. from 4 using ternary operator.

#include<stdio.h>

void main(){
    int num1,num2,num3,num4,max;
    printf("Enter four number = ");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);

    max = (num1>num2 && num1>num3 && num1>num4)?num1:((num2>num3 && num2>num4)?num2:(num3>num4?num3:num4));

    printf("%d is a maximum number",max);

}