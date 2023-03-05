// WAP to find if a given number is divisible by 3 & 5 both or not using UDF.

#include<stdio.h>

void div(int n);

void main(){
    int num,d;
    printf("Enter number to check divisible by 3 & 5 = ");
    scanf("%d",&num);

    div(num);
}

void div(int n)
{
    if (n%3==0 && n%5==0)
    {
        printf("%d is divisible by 3 & 5",n);
    }else{
        printf("%d is not divisible by 3 & 5",n);
    }
}
