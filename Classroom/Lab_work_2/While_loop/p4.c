// WAP to print N to 1 using while loop.

#include<stdio.h>

void main(){
    int i=1,number;

    printf("Enter number = ");
    scanf("%d",&number);

    while (i>=number)
    {
        printf("%d",number);
        printf("\n");
        i--;
    }
    
}