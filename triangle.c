#include <stdio.h>
#include <stdlib.h>

int main82()
{
    int i;
    int j;
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
