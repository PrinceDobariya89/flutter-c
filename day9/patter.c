#include <stdio.h>

void main()
{
    int height = 5;
    // Number of character width in each line
    int width = (2 * height);
    int n = width / 2, i, j;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j <= width; j++)
        {
            if (j == n || j == (width - n) || (i == height / 2 && j > n && j < (width - n)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        n--;
    }
}