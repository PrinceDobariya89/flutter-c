// Write C program to print multiplication table of any number.

#include<stdio.h>

void main(){
    int number,i,mul;

    printf("Enter multiplication table number = ");
    scanf("%d",&number);

    for (i = 1; i <=10 ; i++)
    {
        mul = i * number;
        printf("%d * %2d = %3d",number,i,mul);
        printf("\n");
    }
}