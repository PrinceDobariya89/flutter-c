#include<stdio.h>

void main(){
    int i,j,sp;

    for ( i = 5; i >= 1; i--)
    {
        for (sp = 1; sp <= i; sp++)
        {
            printf("%d",sp);
        }
        for ( j = 5; j >= (i*2-4); j--)
        {
            printf(" ",j);
        }
        for (sp = i; sp >= 1; sp--)
        {
            printf("%d",sp);
        }
        printf("\n");
    }
    for ( i = 2; i <= 5; i++)
    {
        for (sp = 1; sp <= i; sp++)
        {
            printf("%d",sp);
        }
        for ( j = 5; j >= (i*2-4); j--)
        {
            printf(" ",j);
        }
        for (sp = i; sp >= 1; sp--)
        {
            printf("%d",sp);
        }
        printf("\n");
    }
    
}