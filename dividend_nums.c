#include <stdio.h>
#include <stdlib.h>

int main91()
{
    int i;
    for(i = 20; i <= 100; i++)
    {
        if(i % 7 == 0 && i % 3 == 0)
        {
            printf("%d \n", i);
        }

    }
    return 0;
}
