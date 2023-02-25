#include <stdio.h>
#include <stdlib.h>

int comb(int, int);
int factorial(int);
int main86()
{
    int n;
    int r;
    printf("Please enter a number: ");
    scanf("%d", &n);
    printf("Please enter a number: ");
    scanf("%d", &r);
    int x = n;

    printf("The combination of the numbers is %d", comb(n, r));
    return 0;
}

int factorial(int x)
{
    if(x == 1 || x == 0)
    {
        return 1;
    }
    return (x * factorial(x - 1));
}
int comb(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}
