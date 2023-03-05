// WAP to find length of 2D array.

#include <stdio.h>

void main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(int);

    printf("The array has %d rows and %d columns.\n", rows, cols);

}
