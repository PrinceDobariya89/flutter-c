// Write C program to find second largest number in array.

#include <stdio.h>
void main()
{
    int i, j, a, size;
    printf("Enter the size of array = ");
    scanf("%d", &size);
    printf("Enter the numbers = \n");

    int number[size];
    
    for (i = 0; i < size; ++i)
        scanf("%d", &number[i]);

    for (i = 0; i < size; ++i)
    {
        for (j = i + 1; j < size; ++j)
        {
            if (number[i] < number[j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("second largest number is = %d", number[1]);
}