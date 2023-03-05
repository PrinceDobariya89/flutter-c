// WAP to print 1 to N using while loop.

#include<stdio.h>

void main(){
    int i=1,number;

    printf("Enter number = ");
    scanf("%d",&number);

    while (i<=number)
    {
        printf("%d",i);
        printf("\n");
        i++;
    }
    
}