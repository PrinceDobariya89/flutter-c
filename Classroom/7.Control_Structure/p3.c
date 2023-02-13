// WAP to Find max. from given 4 no. using nested if else

#include<stdio.h>

void main(){
    int num1,num2,num3,num4;
    printf("Enter four number = \n");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);

    if (num1>num2 && num1>num3 && num1>num4)
    {
        printf("%d is a maximum number",num1);
    }
    else if (num2>num1 && num2>num3 && num2>num4)
    {
        printf("%d is a maximum number",num2);
    }
    else if (num3>num1 && num3>num2 && num3>num4)
    {
        printf("%d is a maximum number",num3);
    }
    else
    {
        printf("%d is a maximum number",num4);
    }
}