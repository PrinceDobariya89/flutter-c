// WAP to convert given string in togglecase.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){
    char a[100];
    int i, len;

    printf("Enter any string value = ");
    gets(a);

    len = strlen(a);
    for (i = 0; i < len; i++)
    {
        if (a[i]== tolower(a[i]))
        {
            a[i] = toupper(a[i]);
        }else if (a[i] == toupper(a[i]))
        {
            a[i] = tolower(a[i]);
        }    
    }
    puts(a);
}