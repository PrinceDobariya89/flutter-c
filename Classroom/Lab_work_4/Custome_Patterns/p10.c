// E

#include <stdio.h>

void main()
{
    int i, j;

    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if ((i == 2 && j == 2) || (i == 3 && j == 2) || (i == 3 && j == 4) || (i == 5 && j == 2) || (i == 3 && j == 3) || (i == 2 && j == 3) || (i == 2 && j == 4) || (i == 5 && j == 3) || (i == 5 && j == 4) || (i == 6 && j == 2) || (i == 6 && j == 3) || (i == 6 && j == 4))
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}