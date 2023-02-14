// fiind max number

#include<stdio.h>

void main(){
    int a,b,c,d;
    printf("Enter 4 number = ");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if (a>b && a>c && a>d)
    {
        printf("a is maximum");
    }else if (b>c && b>d)
    {
        printf("b is maximum");
    }else if (c>d)  
    {
        printf("c is maximum");
    }else{
        printf("d is maximum");
    }
}