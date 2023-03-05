// WAP to perform cross-diagonal sum of 2D array.

#include <stdio.h>

void main()
{
    int arr[3][3];
    int i, j, sum1 = 0, sum2 = 0;
    
    printf("Enter elements of the array:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    for(i = 0; i < 3; i++)
    {
        sum1 += arr[i][i]; 
    }
    
    for(i = 0, j = 2; i < 3; i++, j--)
    {
        sum2 += arr[i][j]; 
    }
    
    printf("Cross-diagonal sum of the array is %d\n", sum1 + sum2);
}
