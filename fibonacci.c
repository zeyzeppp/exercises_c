#include <stdio.h>
#include <stdlib.h>

int fibonacci(int);
int main85()
{
    int x;
    printf("Please enter a number: ");
    scanf("%d", &x);
    printf("%d", fibonacci(x));
    
    return 0;
}
int fibonacci(int x)
{
    if(x == 1 || x == 2)
    {
        return 1;
    }
    return (fibonacci(x - 1) + fibonacci(x - 2));
}
