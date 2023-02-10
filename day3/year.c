#include<stdio.h>

void main(){
    int year,leap;

    printf("\n--------------------------------------------");
    printf("\nIf output is 0 .It means year is leap year");
    printf("\n------------------------------------------");
    printf("\n\nEnter year = ");
    scanf("%d",&year);

    leap = year % 4;

    printf("\n= %d",leap);

}