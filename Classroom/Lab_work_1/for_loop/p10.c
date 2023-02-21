// WAP to print the multiplication table of N using for loop.

#include<stdio.h>

void main(){
    int i,number,mul;

    printf("Enter multiplication table number = ");
    scanf("%d",&number);

    printf("\nTable of %d is : \n\n",number);

    for (i = 1; i <= 10; i++)
    {
        mul = i*number;
        printf("%d * %2d = %3d",number,i,mul);
        printf("\n");
    }
    
    
}