//  Write C program to input any character and check whether it is alphabet, digit or special character.

#include <stdio.h>

void main()
{
    char ch;
    printf("Press any Character = ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        printf("%c is alphabet");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is digit", ch);
    }
    else
    {
        printf("%c is character");
    }
}