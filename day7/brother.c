#include<stdio.h>

void main(){
    int a,b,c,d,e;
    printf("Enter 5 brother age = ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    if (a>c && a>b && a>c && a>d)
    {
        if (a>e)
        {
            printf("a is bigger");
        }else{
            printf("e is bigger");
        }
    }else{
        if (b>d && b>e)
        {
         if (b>c)
         {
            printf("b is bigger");
         }else{
            printf("c is bigger");
         }
        }else{
            if (c>d)
            {
             if (c>e)
             {
                printf("c is bigger");
             }else{
                printf("e is bigger");
             }
            }else{
                if (d>e)    
                {
                    printf("d is bigger");
                }else{
                    printf("e is bigger");
                }
                
            }
        }
    }
}