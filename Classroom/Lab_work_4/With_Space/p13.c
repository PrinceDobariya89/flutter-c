#include<stdio.h>

void main(){
    char i,j,sp;

    for (i = 'A'; i <= 'E'; i++)
    {
        for (sp = 'E'; sp >= i; sp--)
        {
            printf(" ");
        }
        for (j = i; j >= 'A'; j--)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    
}