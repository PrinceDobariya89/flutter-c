// WAP to get & print 2D array of N elements.

#include <stdio.h>

void main() {
    int n;
    printf("Enter the size of array = ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter the elements of the array = \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The array is = \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}
