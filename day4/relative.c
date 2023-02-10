#include<stdio.h>

void main(){
    int age;

    printf("\nEnter Age : ");
    scanf("%d",&age);

    if (age<=12)
    {
        printf("\nYou are Kid");
    }else if (age>=12 && age <18)
    {
        printf("\nYou are Teenager");
    }else if(age>=18 && age<60)
    {
        printf("\nYou are Adult");
    }else if (age>=60)
    {
        printf("\nYour are Senior citizon");
    }
    
}
    
    
    