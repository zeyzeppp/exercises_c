#include <stdio.h>
#include <stdlib.h>

int main96()
{
    char color[20];
    char pluralNoun[20];
    char name[20];

    printf("Enter a color: ");
    scanf("%s", color);

    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);

    printf("Enter a name: ");
    scanf("%s", name);

    printf("Roses are %s\n", color, pluralNoun);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s ", name);

    return 0;

}