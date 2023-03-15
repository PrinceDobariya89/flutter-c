//  C program to find Length of the String by passing String/ Character Array as an Argument using User Define Functions.

#include<stdio.h>
#include<string.h>

int length(char x[]);

void main(){
    char num[100];
    printf("Enter string = ");
    gets(num);

    printf("%d",length(num));
}

int length(char x[])
{
    return strlen(x);
}
