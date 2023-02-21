#include<stdio.h>

void main(){
    int num;
    char symbol = '+';
    printf("Entre number = ");
    scanf("%d",&num);
    for (int i = 1; i < num; i++)
    {
        printf("%d ",i);
        printf("%c ",symbol);
        printf("%d ",num-i);
    }
    
}