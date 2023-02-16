// WAP to print month names using switch case.

#include <stdio.h>

void main()
{
    char month;
    printf("Enter character = ");
    scanf("%c", &month);
    switch (month)
    {

    case 'j':
    case 'J':
        printf("January\n");
        printf("June\n");
        printf("July");
        break;
    case 'f':
    case 'F':
        printf("February");
        break;
    case 'm':
    case 'M':
        printf("March\n");
        printf("May");
        break;
    case 'a':
    case 'A':
        printf("augest");
        break;
    case 's':
    case 'S':
        printf("Septamber");
        break;
    case 'o':
    case 'O':
        printf("October");
        break;
    case 'n':
    case 'N':
        printf("November");
        break;
    case 'd':
    case 'D':
        printf("December");
        break;

    default:
    printf("Invalid monthe name");
        break;
    }
}