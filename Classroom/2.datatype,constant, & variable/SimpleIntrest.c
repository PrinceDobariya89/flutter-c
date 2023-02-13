// WAP to Simple intrest

#include<stdio.h>

void main()
{
    int amount,rate,time,si;

    printf("Eneter Principale amount = ");
    scanf("%d",&amount);
    printf("\nEneter Rate of intrest = ");
    scanf("%d",&rate);
    printf("\nEneter year of number = ");
    scanf("%d",&time);

    si = amount*rate*time/100;

    printf("\nSimple Intrest = %d",si);
}