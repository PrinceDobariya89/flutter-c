#include<stdio.h>

void main(){
    int i,j,sp;

    for (i = 5; i >= 1; i--)
    {
        for (sp = 5; sp >= i; sp--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (j%2==0)
            {
                printf("|");
            }else{
                printf("-");
            }
            
        }
        printf("\n");
    }
    
}