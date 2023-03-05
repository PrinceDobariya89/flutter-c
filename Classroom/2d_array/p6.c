// WAP to perform coulmn-wise sum of 2D array.

#include <stdio.h>

void main()
{
    int arr[3][3], sum[3];
    int i, j;

    printf("Enter elements of the array:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        int column_sum = 0;
        for (j = 0; j < 3; j++)
        {
            column_sum += arr[j][i];
        }
        sum[i] = column_sum;
    }

    printf("Column-wise sum of the array is = \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", sum[i]);
    }
    printf("\n");
}