#include <stdio.h>
#include <stdlib.h>

int main78()
{
    int a, b = 1;
    int *ap = &a;
    int *bp = &b;
    *ap += *bp;
    printf("%d", *ap);
}