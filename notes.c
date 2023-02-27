#include <stdio.h>
#include <stdlib.h>

int main80()
{
    char students[4][10] = {"zeynep1", "zeynep2", "zeynep3", "zeynep4"};
    int notes[4];
    int i;
    int note;

    for(i = 0; i < 4; i++)
    {
        printf("Please enter %s 's note: ", students[i]);
        scanf(" %d", &note);
        notes[i] = note;
    }
    for(i = 0; i < 4; i++)
    {
        printf("%s's note is %d \n", students[i] , notes[i]);
    }
    return 0;
}