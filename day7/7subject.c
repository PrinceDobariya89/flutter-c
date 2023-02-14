#include<stdio.h>

void main(){
    int java,c,flutter,html,php,android,laravel,sum;

    printf("Enter marks of java = ");
    scanf("%d",&java);
    printf("Enter marks of c = ");
    scanf("%d",&c);
    printf("Enter marks of flutter = ");
    scanf("%d",&flutter);
    printf("Enter marks of html = ");
    scanf("%d",&html);
    printf("Enter marks of php = ");
    scanf("%d",&php);
    printf("Enter marks of android = ");
    scanf("%d",&android);
    printf("Enter marks of laravel = ");
    scanf("%d",&laravel);

    sum = (java+c+flutter+html+php+android+laravel) *100/700;

    printf("Your persantage is = %d\n",sum);

    if (sum>=50 && sum<60)
    {
        printf("B Grade");
    }else if (sum>=60 && sum<70)
    {
        printf("A Grade");
    }
    else if (sum>=70 && sum<80)
    {
        printf("Good");
    }
    else if (sum>=80 && sum<90)
    {
        printf("Excellent");
    }
    else
    {
        printf("Genuis");
    }

}