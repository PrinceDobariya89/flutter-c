// WAP to Print N to 1 using for loop.

#include<stdio.h>

void main(){
    int i,number;
    printf("Entre number = ");
    scanf("%d",&number);

    for (i = number; i >= 1; i--)
    {
        printf("%d",i);
        printf("\n");
    }
    
}