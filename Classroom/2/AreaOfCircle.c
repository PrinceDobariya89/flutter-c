// WAP to Find area of circle

#include<stdio.h>

#define PI 3.14

void main(){
    float radius,area;

    printf("Enter radius of circle = ");
    scanf("%f",&radius);

    area = PI * radius * radius;

    printf("\narea of circle = %0.2f",area);
}