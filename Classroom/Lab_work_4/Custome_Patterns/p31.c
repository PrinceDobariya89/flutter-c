// Z

#include <stdio.h>

void main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if ((i == 2 && j == 1) || (i == 2 && j == 2) || (i == 2 && j == 3) || (i == 2 && j == 5) || (i == 3 && j == 1) || (i == 3 && j == 2) || (i == 3 && j == 4) || (i == 3 && j == 5) || (i == 4 && j == 1) || (i == 4 && j == 3) || (i == 4 && j == 4) || (i == 4 && j == 5) || (i == 6 && j == 1) || (i == 6 && j == 2) || (i == 6 && j == 3) || (i == 6 && j == 4) || (i == 6 && j == 5) || (i == 7 && j == 1) || (i == 7 && j == 2) || (i == 7 && j == 3) || (i == 7 && j == 4) || (i == 7 && j == 5))
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