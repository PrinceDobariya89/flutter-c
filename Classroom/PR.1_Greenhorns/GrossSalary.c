// Write C Program to find gross salary.
//Ex. Base Salary: 100 RS, HRA=10%, DA=5%, TA=8%.
//Ans = 123 RS
#include<stdio.h>

void main(){
    int salary,hra,da,ta,gross_salary;

    printf("Enter Base Salary = ");
    scanf("%d",&salary);

    hra = (10 * salary) / 100;
    da = (5 * salary) / 100;
    ta = (8 * salary) / 100;

    gross_salary = salary + hra + da + ta;

    printf("Gross Salary = %d",gross_salary);

}