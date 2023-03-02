#include <stdio.h>
#include <stdlib.h>

int main79()
{
    int i = 10;
    int *p = &i;

    printf("%p\n", &i);
    printf("%d", *p);

    return 0;

}