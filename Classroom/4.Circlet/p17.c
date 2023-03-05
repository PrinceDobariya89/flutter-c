#include<stdio.h>

void main(){
    int i,j,sp;

    for ( i = 1; i <= 5 ; i++)
    {
        for (sp = i; sp <= 5; sp++)
        {
            printf(" ",sp);
        }
        for ( j = 1; j <=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for ( i = 2; i <= 5; i++)
    {
        for (sp = 1; sp <= i; sp++)
        {
            printf(" ",sp);
        }
        for ( j = i; j <= 5; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
}