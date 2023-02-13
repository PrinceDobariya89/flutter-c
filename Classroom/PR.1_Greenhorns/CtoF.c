// Write C program to convert temperature from degree Celsius to Fahrenheit.

#include<stdio.h>

void main(){
    float celsius,fahrenheit;

    printf("Enter degree celsius = ");
    scanf("%f",&celsius);

    fahrenheit = celsius * 9/5 + 32;

    printf("Fahrenheit = %0.2fF",fahrenheit);

}