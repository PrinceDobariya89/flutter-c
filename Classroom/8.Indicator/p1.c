// C program to swap two numbers using pointers.

#include <stdio.h>

void main()
{
    int a, b, x, *p, *q;
    printf("Enter number of a = ");
    scanf("%d", &a);
    printf("Entere number of b = ");
    scanf("%d", &b);

    printf("Before swap number a = %d\n", a);
    printf("Before swap number b = %d\n", b);

    p = &a;
    q = &b;

    x = *p;
    *p = *q;
    *q = x;

    printf("After swap number a = %d\n", *p);
    printf("After swap number b = %d", *q);
}