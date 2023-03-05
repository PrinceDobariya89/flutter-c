// Write C program to remove spaces, blanks from a string.

#include <stdio.h> 
#include<string.h>

void main(){  
    int i, j, len;  
    char str[100];  
      
    printf("Enter string value = ");
    gets(str);
    len = strlen(str);  
       
    for(i = 0; i < len; i++){  
        if(str[i] == ' '){  
            for(j=i;j<len;j++)  
        {  
            str[j]=str[j+1];  
        }  
        len--;  
        }  
    }  
    printf("Remove space and blanks = %s", str);   
}  