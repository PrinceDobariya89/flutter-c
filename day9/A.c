#include <stdio.h>

void main()
{
    int lines;
    printf("Enter number of lines = ");
    scanf("%d", &lines);

    int mid = (lines - 1) / 2;
    int last = lines - 1;

    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < 2 * lines; j++)
        {
            if (j == lines - 1 + i || j == lines - 1 - i || (i == mid && j >= lines - i && j < 2 * last - i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}