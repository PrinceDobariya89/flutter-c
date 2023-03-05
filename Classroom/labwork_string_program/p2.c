// 1.WAP to convert given character in uppercase.

#include<stdio.h>
#include<ctype.h>

void main(){
    char a, c;

    printf("Enter any Character = ");
    scanf("%c",&a);

    c = toupper(a);

    printf("Your character in uppercase = %c", c);

}