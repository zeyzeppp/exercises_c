#include <stdio.h>
#include <stdio.h>

int main90()
{
    int i;
    int x;
    int enteredNum;

    printf("Please enter a number: ");
    scanf("%d", &x);

    for(i = 1; i <= 2; i++)
    {
        printf("Please enter a number: ");
        scanf("%d", &enteredNum);

        if(x < enteredNum)
        {
            x = enteredNum;
        }
    }

    printf("The biggest number is %d", x);

    return 0;
}