// WAP to print & find sum of inner elements of 5X5 array.

#include <stdio.h>

void main() {
  int arr[5][5] = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15},
    {16, 17, 18, 19, 20},
    {21, 22, 23, 24, 25}};
  
  printf("Array is = \n");
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf(" %2d ", arr[i][j]);
    }
    printf("\n");
  }
  
  int sum = 0;
  for (int i = 1; i < 4; i++) {
    for (int j = 1; j < 4; j++) {
      sum += arr[i][j];
    }
  }
  
  printf("\nSum of inner elements: %d\n", sum);
  
}
