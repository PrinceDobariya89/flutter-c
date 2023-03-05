// WAP to find peform merging of 1D array & store it into another.

#include <stdio.h>

void main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int n1, n2;

    n1 = sizeof(arr1) / sizeof(int);
    n2 = sizeof(arr2) / sizeof(int);

    int merged[n1 + n2];

    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    printf("Merged array is = \n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

}
