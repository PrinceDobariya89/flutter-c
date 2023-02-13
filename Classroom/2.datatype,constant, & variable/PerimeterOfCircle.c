// WAP to Find Perimeter of circle

#include<stdio.h>

#define PI 3.14

void main(){
    float radius,area;

    printf("Enter radius of circle = ");
    scanf("%f",&radius);

    area = 2 * PI * radius;

    printf("\narea of circle = %0.2f",area);
}