//  Write C program to find out max from 4 numbers using nested if.

#include <stdio.h>

void main()
{
    int num1, num2, num3, num4;
    printf("Enter 4 number to find max = ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            if (num1 > num4)
            {
                printf("%d is a maximum number", num1);
            }
        }
    }
    else if (num2 > num3)
    {
        if (num2 > num4)
        {
            printf("%d is a maximum number", num2);
        }
    }
    else if (num3 > num4)
    {
        printf("%d is a maximum number", num3);
    }
    else
    {
        printf("%d is a maximum number", num4);
    }
}