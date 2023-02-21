// find factorial using while loop

#include<stdio.h>

void main(){
    int num;

    num = 1;
    while (num<=10)
    {
        if (num==5)
        {   
            num++;
            continue;
           
        }
         printf("%d ",num);
        num++;
    }
}