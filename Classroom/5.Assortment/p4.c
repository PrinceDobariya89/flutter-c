// Write C program matrix convert into transpose matrix.

#include <stdio.h>
void main()
{
    int a[10][10], transpose[10][10], r, c;
    
    printf("Enter matrix elements:\n");
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 3; ++j)
        {
            printf("Array element a[%d][%d] is = ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEntered value: \n");
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 3; ++j)
        {
            printf("%d  ", a[i][j]);
            if (j == 3 - 1)
                printf("\n");
        }
    }
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 3; ++j)
        {
            transpose[j][i] = a[i][j];
        }
    }
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 2; ++j)
        {
            printf("%d  ", transpose[i][j]);
            if (j == 2 - 1)
            printf("\n");
        }
    }
}