// WAP to convert given string in lowercase.

#include<stdio.h>
#include<string.h>

void main(){
    char a[100];

    printf("Enter any string value = ");
    gets(a);

    strlwr(a);
    puts(a);
}