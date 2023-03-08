#include <stdio.h>
#include <stdlib.h>
double area(int);
double circumference(int);
int main67()
{
    int x;
    printf("Please enter the radius: ");
    scanf("%d", &x);
    printf("Area: %f \n Circumference: %f", area(x), circumference(x));

    return 0;
}

double area(int r)
{
    return 3.14 * r * r;
}

double circumference(int r)
{
    return 2 * 3.14 * r;
}