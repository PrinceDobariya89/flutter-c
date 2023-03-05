#include<stdio.h>

void main(){
    char i,j,sp;

    for (i = 'E'; i >= 'A'; i--)
    {
        for (sp = 'E'; sp >= i; sp--)
        {
            printf(" ");
        }
        for (j = 'A'; j <= i; j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    
}