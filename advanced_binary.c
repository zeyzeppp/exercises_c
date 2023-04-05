#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main47()
{
    int a[8] = {1,0,0,0,0,1,0,0};
    int i;
    int count = 0;
    int result = 0;

    if(a[0] == 0)
    {
        for(i = 0; i < 8; i++)
        {
            result += (a[i] * pow(2, (7 - i)));
        }
    }

    else
    {
        for(i = 7; i >= 0; i--)
        {

            if(a[i] == 1)
            {
                count++;

                if(count == 1)
                {
                    a[i] = 1;
                }
                else
                {
                    a[i] = 0;
                }

            }

            else
            {
                if(count == 0)
                {
                    a[i] = 0;
                }
                else
                {
                    a[i] = 1;
                }
            }

        }
        for(i = 0; i < 8; i++)
        {
            printf("%d\n", a[i]);
        }

        for(i = 0; i < 8; i++)
        {
            result += (a[i] * pow(2, (7 - i)));
        }

    }
    printf("%d", -result);

    return 0;
}

//06.04.2023 01:52 ---- beynim yandi:)
