// Write C program to check whether a string is palindrome or not.

#include <stdio.h>
#include <string.h>

void main(){
   char a[100];
    int n, i, count = 0;

    printf("Enter String to check palindrom or not = ");
    scanf("%s", &a);

    n = strlen(a);

    for (i = 0; i < n; i++)
    {
        if (a[i] != a[n - i -1])
        {
            count=1;
        }
    }
    if (count)
    {
        printf("%s is not a pelindrom",a);
    }
    else
    {
        printf("%s is a pelindrom",a);
    }
}