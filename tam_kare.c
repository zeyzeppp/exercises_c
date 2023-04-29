#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main41()
{
      int i, j;

      for(i = 10; i < 1000; i++)
      {
            for(j = 4; j < 32; j++)
            {
                  if(i == pow(j, 2))
                  {
                        printf("%d\n", i);
                        break;
                  }

            }
      }
}
