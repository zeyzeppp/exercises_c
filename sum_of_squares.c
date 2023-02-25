#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main99()
{
    int a;
    int b;
    int c;

    printf("Enter 3 numbers: ");
    scanf("%d, %d, %d", &a, &b, &c);

    int sum_of_sqr = pow(a, 2) + pow(b, 2) + pow(c, 2);
    printf("Result = %d", sum_of_sqr);

    return 0;

}