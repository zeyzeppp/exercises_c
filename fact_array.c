#include <stdio.h>
#include <stdio.h>

int main81()
{
    int x;
    int a[10];
    a[0] = 1;
    a[1] = 1;

    for(x = 2; x < 10; x++)
    {
        a[x] = a[x - 1] * x;
    }

    printf("Please enter a number: ");
    scanf("%d", &x);
    printf("The factorial of the number is %d", a[x]);

    return 0;
}