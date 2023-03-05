#include<stdio.h>

void main(){
    int i,j,sp;

    for (i = 1; i <= 5; i++)
    {
        for (sp = 5; sp >= i; sp--)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
           printf("*");        
        }
        printf("\n");
    }
    
}