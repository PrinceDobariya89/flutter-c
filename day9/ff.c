#include<stdio.h>

void main(){

    int sp,a=1;
    
    for (int i=1;i<=5;i++)
    {
        for (sp = 1; sp <= 5-i; sp++)
        {
          printf(" ");  
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*",j);   
        }
        printf("\n");
        a++;
    }
}
