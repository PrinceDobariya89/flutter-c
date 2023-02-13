// WAP to Find min. from given 5 no. using nested if else.

#include<stdio.h>

void main(){
    int num1,num2,num3,num4,num5;
    printf("Enter five number = \n");
    scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);

    if (num1<num2 && num1<num3 && num1<num4 && num1<num5)
    {
        printf("%d is a minimum number",num1);
    }
    else if (num2<num1 && num2<num3 && num2<num4 && num2<num5)
    {
        printf("%d is a minimum number",num2);
    }
    else if (num3<num1 && num3<num2 && num3<num4 && num3<num5)
    {
        printf("%d is a minimum number",num3);
    }
    else if (num4<num1 && num4<num2 && num4<num3 && num4<num5)
    {
        printf("%d is a minimum number",num4);
    }
    else
    {
        printf("%d is a minimum number",num5);
    }
}