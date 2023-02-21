// WAP to print odd no. from 1 to N using for loop.

#include<stdio.h>

void main(){
    int i,number;
    printf("Enter number = ");
    scanf("%d",&number);

    for (i = 1; i <= number; i++)
    {
        if (i%2==1)
        {
            printf("%d",i);
            printf("\n");
        }
        
    }
    
}