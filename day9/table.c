#include<stdio.h>

void main(){
    int num,mul;
    printf("Enter number = ");
    scanf("%d",&num);

    for (int i = 1; i <= 10; i++)
    {
        mul = i*num;
        printf("%d * %d = %d\n",num,i,mul);
    }
}