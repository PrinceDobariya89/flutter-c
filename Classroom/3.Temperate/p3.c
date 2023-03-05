//  Write C program to count number of digits in a number.

#include<stdio.h>

void main(){
    int number,count=0;
    printf("Enter number = ");
    scanf("%d",&number);

    if (number==0)
    {
        printf("1");
    }else
    {
        while (number!=0)
    {
        number = number/10;
        count++;
    }
    printf("%d",count);
    }

}