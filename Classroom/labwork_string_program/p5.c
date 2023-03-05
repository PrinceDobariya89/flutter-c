// WAP to convert given string in titlecase.

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
       a[i] = tolower(a[i]);
    }
    a[0] = toupper(a[0]);
    for (i = 0; i < len; i++)
    {
        if (a[i]==' ')
        {
            a[i+1] = toupper(a[i+1]) ;
        }   
    }
    puts(a);
}