#include<stdio.h>

void main(){
    char i,j,sp;

    for (i = 'A'; i <= 'E'; i++)
    {
        for (sp = i; sp >= 'A'; sp--)
        {
            printf(" ");
        }
        for (j = i; j <= 'E'; j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    
}