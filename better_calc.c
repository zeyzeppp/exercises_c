#include <stdio.h>
#include <stdlib.h>

int main93()
{
    double num1;
    double num2;
    char op;
    double result;

    printf("Please enter a number: ");
    scanf("%lf", &num1);

    printf("Please enter an operator: ");
    scanf(" %c", &op);

    printf("Please enter a number: ");
    scanf("%lf",&num2);

    if(op == '+')
    {
        result = num1 + num2;
        printf("Answer is %f", result);
    }
    else if(op == '-')
    {
        result = num1 - num2;
        printf("Answer is %f", result);
    }
    else if (op == '*')
    {
        result = num1 * num2;
        printf("Answer is %f", result);
    }
    else if(op == '/')
    {
        result = num1 / num2;
        printf("Answer is %f", result);
    }
    else
    {
        printf("Invalid Operation");
    }

    return 0;
}