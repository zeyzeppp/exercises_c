#include <stdio.h>
#include <stdlib.h>

int main88()
{
    int primalNum;
    printf("Please enter a number: ");
    scanf("%d", &primalNum);


    int count = 0;
    int i;

    for(i = 2; i < primalNum; i++)
    {
        if(primalNum % i == 0)
        {
            count++;
        }
    }

    if(count == 0)
    {
        if(primalNum != 1)
        {
            printf("The number is a primal number.");
        }
        else
        {
            printf("The number is not a primal number.");
        }
    }
    else
    {
        printf("The number is not a primal number.");
    }

    return 0;
}