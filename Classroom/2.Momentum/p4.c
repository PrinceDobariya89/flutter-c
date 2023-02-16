// Write C program use switch statement. Display Monday to Sunday.

#include <stdio.h>

void main()
{
    char ch;
    printf("Enter character = ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'm':
    case 'M':
        printf("Monday");
        break;
    case 't':
    case 'T':
        printf("Tuesday\n");
        printf("Thursday");
        break;
    case 'w':
    case 'W':
        printf("Wednesday");
        break;
    case 'f':
    case 'F':
        printf("Friday");
        break;
    case 's':
    case 'S':
        printf("Saturday\n");
        printf("Sunday");
        break;

    default:
        printf("no any day name start with %c character", ch);
        break;
    }
}