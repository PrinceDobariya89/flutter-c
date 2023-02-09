#include<stdio.h>

#define PI 3.14

void main()
{
    int radius;
    float ac;
    printf("Enter the area of circle = ");
    scanf("%d",&radius);

    ac = PI * radius * radius;

    printf("\nArea of Circle = %0.2f",ac);

}