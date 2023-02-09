#include<stdio.h>

void main(){
    int f;
    float c;

    printf("Enter fahrenheit value : ");
    scanf("%d",&f);

    c = (f*32)-5/9;

    printf("\n celcius is = %c",c);

}