#include <stdio.h>
#include <stdlib.h>

int main100()
{
    int date;
    int age;

    printf("Enter a date: ");
    scanf("%d", &age);

    printf("Enter your age: ");
    scanf("%d", &date);

    int birth = date - age;
    printf("You were born in %d", birth);

    return 0;
}


