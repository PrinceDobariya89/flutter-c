// WAP to convert given string in uppercase.

#include<stdio.h>
#include<string.h>

void main(){
    char a[100];

    printf("Enter any string value = ");
    gets(a);

    strupr(a);
    puts(a);
}