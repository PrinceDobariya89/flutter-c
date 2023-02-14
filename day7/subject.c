#include<stdio.h>

void main(){
    int java,c,flutter,sum;
    printf("Enter marks of java = ");
    scanf("%d",&java);
    printf("Enter marks of c = ");
    scanf("%d",&c);
    printf("Enter marks of flutter = ");
    scanf("%d",&flutter);

    sum = (java+c+flutter) *100/300;

    printf("Your percentage = %d\n",sum);

    if (sum >= 50)
    {
        printf("Your are Pass");
    }else{
        printf("Your are fail");
    }   
}