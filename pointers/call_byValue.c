#include <stdio.h>
#include <stdlib.h>

//changing values
int change(int, int);

int main()
{
    int x = 2003;
    int y = 2023;

    change(x, y);
    printf("a = %d, b = %d", x, y);
    return 0;
}

int change(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d", a, b);
}

