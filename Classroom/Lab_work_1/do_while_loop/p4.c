// WAP to Print N to 1 using do while loop.

#include<stdio.h>

void main(){
    int number;
    printf("Enter number = ");
    scanf("%d",&number);

    do
    {
        printf("%d",number);
        printf("\n");
        number--;
    } while (number>=1);
    
}