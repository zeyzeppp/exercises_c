#include <stdio.h>
#include <stdlib.h>

int main70()
{
    int num;
    int i;
    int count = 0;
    printf("Please enter a number: ");
    scanf("%d", &num);

    for(i = 5; i < num; i*=5)
    {
        if(num % i != 0)
        {
            count++;
        }
    }
    if(count == 0)
    {
        printf("%d is power of 5.", num);
    }
    else
    {
        printf("%d is not power of 5.", num);
    }

}