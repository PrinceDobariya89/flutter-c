// WAP to print the multiplication table of N using while loop.
#include<stdio.h>

void main(){
    int i=1,mul,number;

    printf("Enter multiplication table number = ");
    scanf("%d",&number);

    printf("\nTable of %d is : \n\n",number);

    while (i<=10)
    {
        mul = i * number;
        printf("%d * %d = %d",number,i,mul);
        printf("\n");
        i++;
    }
    
}