// WAP to convert given character in lowercase.

#include<stdio.h>
#include<ctype.h>

void main(){
    char a, c;

    printf("Enter any Character = ");
    scanf("%c",&a);

    c = tolower(a);

    printf("Your character in lowercase = %c", c);

}