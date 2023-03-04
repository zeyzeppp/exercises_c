#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *fb(char *p, int index)
{
    int length = strlen(p);
    if(index > length)
    {
        return NULL;
    }
    else
    {
        return p + index;
    }
}

int main()
{
    char name[] = "robin_one_persie";
    printf("%s", fb(name, 0));

    return 0;
}