#include<stdio.h>

void main(){
    int num;

    num = 0;
    while (++num<10)
    {
        if (num%2==1)
        {
            printf("%d ",num);
        }
        
    }

    
}