#include<stdio.h>

void main(){
    int age;

    printf("\nEnter your age : ");
    scanf("%d",&age);

    age>=18?printf("\nYou are illigble to voting"):printf("You are not illigble to voting");

}