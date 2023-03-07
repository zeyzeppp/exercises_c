#include <stdio.h>
#include <stdlib.h>

int main68()
{
    int i;
    int number;
    int p, n = 0;
    for(i=0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        if(number < 0)
        {
            n++;
        }
        else
        {
            p++;
        }
    }
    printf("There are %d positive and %d negative numbers.", p, n);

    return 0;
}
