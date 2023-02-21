#include<stdio.h>

void main(){

    int sp,b=0;
    char a='A';
    
    for (int i=5;i>=1;i--)
    {
        for (sp = i; sp <= a; sp++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("%2d",j);    
        }
        printf("\n");
        b++;
    }
}
