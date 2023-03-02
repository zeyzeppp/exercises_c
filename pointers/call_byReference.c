#include <stdlib.h>
#include <stdio.h>

//changing values -- call by reference(address)
int changing(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main76()
{
    int x = 1907;
    int y = 1905;
    changing(&x, &y);
    printf("x: %d, y: %d", x, y);

    return 0;
}

