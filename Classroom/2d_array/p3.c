// WAP to find average of 2D array.

#include <stdio.h>

void main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(int);

    int sum = 0;
    int count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
            count++;
        }
    }

    float avg = (float) sum / count;

    printf("The average of the array is %.2f.\n", avg);

}
