#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tuz_buz(char []);

int main31()
{
    char kelime[10];

    printf("bir kelime yaziniz: ");
    fgets(kelime, 10, stdin);

    tuz_buz(kelime);

    return 0;
}

void tuz_buz(char str[])
{
    if(strcmp(str, "tuz\n") == 0)
    {
        printf("buz");
    }
    else
    {
        printf("tuz");
    }
}

