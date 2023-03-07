#include <stdio.h>
#include <stdlib.h>

int main69()
{
    int number;
    int digit;
    int i;
    printf("Please enter a number: ");
    scanf("%d", &number);

    for(i = 10; i <= 10000; i*=10)
    {
        digit = number % 10;
        printf("%d\n", digit);
        number = number/10;
    }
    return 0;
}