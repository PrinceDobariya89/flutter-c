// WAP to Find min. from given 3 no. using nested if else.

#include<stdio.h>

void main(){
    int a,b,c;
    printf("Enter 1st number a = ");
    scanf("%d",&a);
    printf("Enter 2nd number b = ");
    scanf("%d",&b);
    printf("Enter 3rd number c = ");
    scanf("%d",&c);

    if (a<b && a<c)    
    {
        printf("a is minimum");
    }else if (b<a && b<c)
    {
        printf("b is minimum");
    }else{
        printf("c is minimum");
    }
}
