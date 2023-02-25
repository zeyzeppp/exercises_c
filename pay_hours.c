#include <stdio.h>
#include <stdlib.h>

int main95()
{
    int salary(int hour)
    {
        int result;
        if(hour <= 10)
        {
            result = hour * 5;
        }
        else if(hour <= 20)
        {
            result = 50 + (hour - 10) * 3;
        }
        else
        {
            result = 80 + (hour - 20) * 2;
        }
    }

    int x;
    printf("Please enter an hour: ");
    scanf("%d", &x);
    printf("%d", salary(x));


    return 0;
}
