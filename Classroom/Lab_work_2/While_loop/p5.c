// WAP to print odd no. from 1 to N using while loop.

#include<stdio.h>

void main(){
    int i=1,number;

    printf("Enter number = ");
    scanf("%d",&number);

    while (i<=number)
    {
        if (i%2==1)    
        {
            printf("%d",i);
            printf("\n");
        }
        
        i++;
    }
    
}