#include<stdio.h>

void main(){
    int age;
    printf("Enter your age = ");
    scanf("%d",&age);

    if (age>=18)
    {
        printf("Your are eligible to voting");
    }else{
        printf("Your are not eligible to voting");
    }
    

}