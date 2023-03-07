#include <stdio.h>
#include <stdlib.h>

int main71()
{
    int i, j;
    for(i = 10; i < 1000; i++)
    {
        for(j = 1; j < 32; j++)
        {
            if(j*j == i)
            {
                printf("%d\n", i);
            }
        }
    }
}