#include<stdio.h>

void main(){
    float a,b,c;

    //addition
    printf("\nEnter value 1 = ");
    scanf("%f",&a);
    printf("\nEnter value 2 = ");
    scanf("%f",&b);
    c = a+b;
    printf("\nAddition is = %0.2f",c);

    //substraction
    printf("\nEnter value 1 = ");
    scanf("%f",&a);
    printf("\nEnter value 2 = ");
    scanf("%f",&b);
    c = a-b;
    printf("\nSubstraction is = %0.2f",c);

    //multiplication
    printf("\nEnter value 1 = ");
    scanf("%f",&a);
    printf("\nEnter value 2 = ");
    scanf("%f",&b);
    c = a*b;
    printf("\nMultiplication is = %0.2f",c);

    //division
    printf("\nEnter value 1 = ");
    scanf("%f",&a);
    printf("\nEnter value 2 = ");
    scanf("%f",&b);
    c = a/b;
    printf("\nDivision is = %0.2f",c);

}