#include<stdio.h>

void main(){
    int i,j,sp;

    for (i = 1; i <= 5; i++)
    {
        for (sp = i; sp <= 5; sp++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (j%2==0)
            {
                printf("-");
            }else{
                printf("|");
            }
        }
        printf("\n");
    }
    
}