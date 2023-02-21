// WAP to Find leap year from 2000 to 3000 using do while loop.

#include <stdio.h>

void main()
{

    int year1 = 2000, year2 = 3000;
    do
    {
        if (year1 % 4 == 0)
        {
            printf("%d", year1);
            printf("\n");
        }
        year1++;
    } while (year1 <= year2);
}