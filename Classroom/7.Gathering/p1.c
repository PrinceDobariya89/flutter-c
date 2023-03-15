//  C program to find factorial of number using recursion.

#include<stdio.h>

int fact(int x);

void main(){
    int num;
    printf("Enter number = ");
    scanf("%d",&num);

    printf("Factorial od %d is = %d",num,fact(num));

}

int fact(int x)
{
    if(x==0)
    {
        return 1;
    }else{
        return x * fact(x - 1);
    }
}
