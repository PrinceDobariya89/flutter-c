// WAP to find length of 1D array.

#include <stdio.h>

void main() {
    int arr[] = {1, 2, 3, 4, 5};

    int length = sizeof(arr) / sizeof(int);

    printf("Length of the array: %d\n", length);

}
