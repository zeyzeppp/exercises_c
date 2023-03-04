#include <stdio.h>
#include <stdlib.h>

int max(int *p, int length)
{
    int maxNum = p[0];
    int i;
    for(i = 1; i < length; i++)
    {
        if(p[i] > maxNum)
        {
            maxNum = p[i];
        }
    }
    return maxNum;
}

int main75()
{
    int numbers[] = {20,23, 19, 48, 20, 45};
    //int nums_size = sizeof(numbers[index])/sizeof(numbers);
    int maxNum = max(numbers, 6);

    printf("The biggest number is %d\n", maxNum);

    return 0;
}
