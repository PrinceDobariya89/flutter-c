// WAP to find average of 1D array.

#include <stdio.h>

void main()
{
    int num;
    int length, i;
    float average, total = 0;

    printf("Enter size of an array = ");
    scanf("%d", &num);

    int a[num];
    printf("\nEnter array elements value : \n");
    for (i = 0; i < num; i++)
    {
        printf("Enter elements of a[%d] is = ", i);
        scanf("%d", &a[i]);
    }

    length = sizeof(a) / sizeof(int);

    for (int i = 0; i < length; i++) {
        total += a[i];
    }

    average = total / length;

    printf("Average of the array: %.2f\n", average);
}
