// WAP to print even no. from N to 1 using for loop.

#include<stdio.h>

void main(){
    int i,number;

    printf("Enter number = ");
    scanf("%d",&number);

    for (i = number; i >= 1; i--)
    {
        if (i%2==0)
        {
            printf("%d",i);
            printf("\n");
        }
        
    }
    
}