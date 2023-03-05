// WAP to find cube of given no using UDF.

#include<stdio.h>

int cube(int num);

void main(){
    int num, c;
    printf("Enter number to find cube = ");
    scanf("%d",&num);

    c = cube(num);
    printf("cube of %d is = %d",num,c);

}

int cube(int num){
    return num * num * num;
}

