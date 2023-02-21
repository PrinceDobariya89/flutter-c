// WAP to print even no. from N to 1 using do while loop.

#include<stdio.h>

void main(){
    int number;
    printf("Enter number = ");
    scanf("%d",&number);

    do
    {
        if (number%2==0)
        {
            printf("%d",number);
            printf("\n");
        }    
        number--;
    } while (number>=1);
    
}