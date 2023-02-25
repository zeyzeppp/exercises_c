#include <stdio.h>
#include <stdlib.h>

int main89()
{
    int i = 0;
    int counter = 0;
    int sum = 0;
    while(i != -1)
    {
        printf("Please enter a number: ");
        scanf("%d", &i);
        counter++;
        sum += i;
    }

    sum++;
    counter--;
    printf("Average of the numbers is %d", sum / counter);


    return 0;
}