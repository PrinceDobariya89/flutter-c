// WAP to print the multiplication table of N using do while loop.

#include<stdio.h>

void main(){
    int mul=1,number,i=1;
    
    printf("Enter multiplication table number = ");
    scanf("%d",&number);

    printf("\nTable of %d is :\n\n",number);

    do
    {
        mul = i*number;
        printf("%2d * %2d  = %3d",number,i,mul);  
        printf("\n");
        i++;
    } while (i<=10);
      

}