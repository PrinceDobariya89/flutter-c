// WAP to find peform addition of 2D array & store it into another.

#include <stdio.h>

int main()
{
    int arr1[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int arr2[3][4] = {
        {2, 3, 4, 5},
        {6, 7, 8, 9},
        {10, 11, 12, 13}};

    int sum[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("The sum of the arrays is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}
