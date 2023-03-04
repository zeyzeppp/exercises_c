#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int length(char *p)
{
    int length = 0;
    int i = 0;
    while(p[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}
int main74()
{
    char name[] = "zeynep";
    printf("%d", length(name));

    return 0;
}