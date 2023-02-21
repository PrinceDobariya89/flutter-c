// WAP to print sum 1 to N using do while loop.

#include<stdio.h>

void main(){
    int sum,number;
    printf("Enter number = ");
    scanf("%d",&number);

    do
    {
        sum+=number;
        number--;
    } while (1<=number);
    printf("%d",sum);
    
}