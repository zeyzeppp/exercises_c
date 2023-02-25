#include <stdio.h>
#include <stdio.h>

int main94()
{
    int note;
    printf("Please enter your note: ");
    scanf("%d", &note);
    if(note >= 90)
    {
        printf("Your letter grade is AA");
    }
    else if(note >= 80)
    {
        printf("Your letter grade is BA");
    }
    else if(note >= 70)
    {
        printf("Your letter grade is BB");
    }
    else
    {
        printf("Your letter grade is FF");
    }
}