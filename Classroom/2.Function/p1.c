// WAP to create infinite calc using UDF, switch case and Loop.

#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

void main()
{
    int num1, num2, total, i;
    char op, close;

    i = 1;
    while (i)
    {
        printf("Enter value 1 = ");
        scanf("%d", &num1);
        printf("Enter operator = ");
        scanf(" %c", &op);
        printf("Enter value 2 = ");
        scanf("%d", &num2);

        switch (op)
        {
        case '+':
            total = add(num1, num2);
            printf("Aaddition of %d and %d is = %d\n\n", num1, num2, total);
            break;

        case '-':
            total = sub(num1, num2);
            printf("Substraction of %d and %d is = %d\n\n", num1, num2, total);
            break;

        case '*':
            total = mul(num1, num2);
            printf("Multiplication of %d and %d is = %d\n\n", num1, num2, total);
            break;

        case '/':
            total = div(num1, num2);
            printf("Division od %d and %d is = %d\n\n", num1, num2, total);
            break;

        default:
            printf("You are entered wrong operator...\n");
            break;
        }
        i++;
    }
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}
