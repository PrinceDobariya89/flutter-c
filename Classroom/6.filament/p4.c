// Write C program to remove all repeated characters in a string.

#include <stdio.h>
#include <string.h>
 
void main(){
  	char str[100];
  	int i, j, k, len;
 
  	printf("Enter String value =  ");
  	gets(str);

	len = strlen(str);
  	 	
  	for(i = 0; i < len; i++)
  	{
  		for(j = i + 1; str[j] != '\0'; j++)
  		{
  			if(str[j] == str[i])  
			{
  				for(k = j; str[k] != '\0'; k++)
				{
					str[k] = str[k + 1];
				}
 			}
		}
	}
	printf("Removed all repeted characters = %s ", str);
}