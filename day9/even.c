#include<stdio.h>

void main(){
    int num;
    printf("Enter number = ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        if (i%2==0)
        {
            printf("%d ",i);
        }
        
    }
    

}