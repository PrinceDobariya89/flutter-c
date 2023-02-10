#include<stdio.h>

void main(){
    float a,b,c;

    //addition
    printf("\nEnter value 1 = ");
    scanf("%f",&a);
    printf("\nEnter value 2 = ");
    scanf("%f",&b);
    c = a+b;
    printf("\nAddition is = %f",c);

    //substraction
    printf("\nEnter value 1 = ");
    scanf("%f",&a);
    printf("\nEnter value 2 = ");
    scanf("%f",&b);
    c = a-b;
    printf("\nSubstraction is = %f",c);

    //multiplication
    printf("\nEnter value 1 = ");
    scanf("%f",&a);
    printf("\nEnter value 2 = ");
    scanf("%f",&b);
    c = a*b;
    printf("\nMultiplication is = %f",c);

    //division
    printf("\nEnter value 1 = ");
    scanf("%f",&a);
    printf("\nEnter value 2 = ");
    scanf("%f",&b);
    c = a/b;
    printf("\nDivision is = %f",c);

    //modules
    printf("\nEnter value 1 = ");
    scanf("%d",&a);
    printf("\nEnter value 2 = ");
    scanf("%d",&b);
    int c = a%b;
    printf("\nReminder is = %d",c);

}