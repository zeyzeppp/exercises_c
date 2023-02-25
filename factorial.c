#include <stdio.h>
#include <stdlib.h>

int fact(int);

int main87()
{
    printf("Please enter a number: ");
    int x;
    scanf("%d", &x);
    printf("The factorial of the %d is %d", x, fact(x));
    
    return 0;
}

int fact(int x)
{
    if(x == 0 || x == 1)
    {
        return 1;
    }
    return (x * fact(x - 1));
}
