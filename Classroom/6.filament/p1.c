// Write C program to count frequency of each character in a string.

#include<stdio.h>
#include<string.h>

void main(){
    char s[100];
    int i, j, n, count=0;

    printf("Enter String = ");
    gets(s);

    n = strlen(s);

    for (i = 0; i < n; i++)
    {
        count=1;
        if (s[i])
        {
            for (j = i+1; j < n; j++)
            {
                if (s[i]==s[j])
                {
                    count++;
                    s[j] = '\0';
                }
            }
            printf("%c = %d\n",s[i],count);
               
        }
        
    }
    

}