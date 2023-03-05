// Write C program to print all negative elements in an array.

#include <stdio.h>

void main()
{
    int a[10], i;

    printf("Enter 10 value \n");

    for (i = 0; i < 10; i++)
    {
        printf("array of a[%d] is = ", i);
        scanf("%d", &a[i]);
    }

    printf("All negative element is = \n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] <= 0)
        {
            printf("%d\n", a[i]);
        }
    }
}