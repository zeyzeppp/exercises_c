#include <stdio.h>
#include <stdlib.h>

char *number(char *p[], int num)
{
    if(num > 7)
    {
        return NULL;
    }
    else
    {
        return p[num - 1];
    }
}
int main72()
{
    char *days[] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
    printf("%s", number(days, 3));
}