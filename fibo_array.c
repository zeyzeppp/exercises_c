#include <stdio.h>
#include <stdlib.h>


int fibo(int);

int main84()
{
    int y;
    printf("Please enter a number: ");
    scanf("%d", &y);
    int array[y];
    int i;
    for(i = 0; i < y; i++)
    {
        array[i] = fibo(i + 1);
        printf("%d ", array[i]);
    }
    return 0;
}

int fibo(int x)
{
    if(x == 1 || x == 2)
    {
        return 1;
    }
    return (fibo(x - 1) + fibo(x - 2));
}

