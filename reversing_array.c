#include <stdio.h>
#include <stdio.h>

int main83()
{
    int a[5];
    int i;
    int x;
    for(i = 0; i < 5; i++)
    {
        printf("Please enter a number: ");
        scanf("%d", &x);
        a[i] = x;
    }
    for(i = 0; i < 5; i++)
    {
        printf("%d", a[4 - i]);
    }
    
    return 0;
}
