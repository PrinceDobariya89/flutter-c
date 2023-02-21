// WAP to Print 1 to N using do while loop.

#include<stdio.h>

void main(){
    int i=1,number;
    printf("Enter number = ");
    scanf("%d",&number);

    do
    {
        printf("%d",i);
        printf("\n");
        i++;
    } while (i<=number);
    

}