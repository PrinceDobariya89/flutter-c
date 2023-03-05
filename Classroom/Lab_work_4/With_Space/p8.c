#include<stdio.h>

void main(){
    int i,j,sp;

    for (i = 1; i <= 5; i++)
    {
        for (sp = 1; sp <= i; sp++)
        {
            printf(" ");
        }
        for (j = i; j <= 5; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
}