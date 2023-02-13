// WAP to Find if a given no. is natural or not using ladder if else.

#include<stdio.h>

void main(){
    int num;
    printf("Enter the number = ");
    scanf("%d",&num);

    if (num>0)  
    {
        printf("%d is a natural number",num);
    }
    else if (num<0)
    {
        printf("%d is not a natural number",num);
    }
    else
    {
        printf("%d",num);
    }
    
    

}