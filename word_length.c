#include <stdio.h>
#include <stdlib.h>

int main66()
{
    int i;
    char word[100];
    int length = 0;
    printf("Write something: ");
    scanf("%s", word);

    for(i = 0; i < 100; i++)
    {
        if(word[i] != '\0')
        {
            length++;
        }
        else
        {
            break;
        }
    }
    printf("%d", length);

    return 0;
}