// WAP to get & print 1D array of N elements.

#include<stdio.h>

void main(){
    int num,a[num],i;

    printf("Enter size of an array = ");
    scanf("%d",&num);

    printf("\nEnter array elements value : \n");
    for (i = 0; i < num; i++)
    {
        printf("Enter elements of a[%d] is = ",i);
        scanf("%d",&a[i]);
    }

    printf("\nArray elements value :\n");
    for (i = 0; i < num; i++)
    {
        printf("Array elements of a[%d] = ",i);
        printf("%d\n",a[i]);
    } 
}