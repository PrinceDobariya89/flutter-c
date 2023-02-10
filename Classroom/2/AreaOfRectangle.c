// WAP to Find area of Rectangle

#include<stdio.h>

void main(){
    float length,height,area;

    printf("Enter length of rectangle = ");
    scanf("%f",&length);

    printf("Enter height of rectangle = ");
    scanf("%f",&height);


    area = length*height;

    printf("\nArea of rectangle is = %0.2f",area);
}