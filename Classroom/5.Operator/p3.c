// WAP to find a the answer given formula (x+y)3.

#include<stdio.h>

void main(){
    int x,y,z;
    printf("Enter value of x = ");
    scanf("%d",&x);

    printf("Enter value of y = ");
    scanf("%d",&y);

    // z = (x*x*x) + (y*y*y) + 3*x*y*(x+y);
    z = (x+y)*(x+y)*(x+y);
    printf("(x+y)3 = %d",z);
}