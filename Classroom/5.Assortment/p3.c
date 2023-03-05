// Write C program to addition of two matrices.

#include <stdio.h>

void main()
{
    int a[2][2], b[2][2], sum[2][2], i, j;

    printf("Enter array of a is\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Array element a[%d][%d] is = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter array of b is = \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Array element b[%d][%d] is = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nsum of array is = \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d  ", sum[i][j]);
        }
        printf("\n");
    }
}