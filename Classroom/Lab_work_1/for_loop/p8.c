// WAP to print sum 1 to N using for loop.

#include<stdio.h>

void main(){
    
    int i,number,sum=0;
    
    printf("Enter number = ");
    scanf("%d",&number);

    for (i = 1; i <= number; i++)
    {
        sum+=i;
    }
    printf("%d",sum);

}