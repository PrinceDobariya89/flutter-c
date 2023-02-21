// WAP to Find leap year from 2000 to 3000 using for loop.

#include<stdio.h>

void main(){
    int i,year1=2000,year2=3000;

    for (i = year1; i <= year2; i++)
    {
        if (i%4==0)
        {
            printf("%d",i);
            printf("\n");
        }
    }
    
}